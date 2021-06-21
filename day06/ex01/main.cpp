/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 11:12:29
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include <iostream>
#include <string>

struct Data
{
	std::string *str1;
	int number;
	std::string *str2;
};

void * serialize(void)
{
	srand(time(nullptr));
	std::string rand_str[5] = { "school21", "serial", "stroustrup", "pony", "penguin" };
	std::string *str1 = new std::string(rand_str[rand() % 5]);
	int number = rand() % 20;
	std::string *str2 = new std::string(rand_str[rand() % 5]);

	void *raw = ::operator new (sizeof(std::string *) + sizeof(int) + sizeof(std::string *));
	void *raw_tmp = raw;

	std::cout << std::endl << std::endl;

	*reinterpret_cast<std::string **>(raw_tmp) = str1;
	raw_tmp = reinterpret_cast<void **>(raw_tmp) + 1;
	*reinterpret_cast<int *>(raw_tmp) = number;
	raw_tmp = reinterpret_cast<void **>(raw_tmp) + 1;
	*reinterpret_cast<std::string **>(raw_tmp) = str2;
	std::cout << "In serialization:" << std::endl;
	std::cout << "1st string: " << str1;
	std::cout << ", " << *str1 << std::endl;
	std::cout << "number: " << &number;
	std::cout << ", " << number << std::endl;
	std::cout << "2nd string: " << str2;
	std::cout << ", " << *str2 << std::endl;

	return (raw);
}

Data * deserialize(void * raw)
{
	Data *des = new Data;

	des->str1 = *reinterpret_cast<std::string **>(raw);
	raw = reinterpret_cast<void **>(raw) + 1;
	des->number = *reinterpret_cast<int *>(raw);
	raw = reinterpret_cast<void **>(raw) + 1;
	des->str2 = *reinterpret_cast<std::string **>(raw);
	
	return des;
}

int main(void)
{
	Data *result = deserialize(serialize());
	std::cout << std::endl;
	std::cout << "After deserialization:" << std::endl;
	std::cout << "1st string: " << result->str1;
	std::cout << ", " << *result->str1 << std::endl;
	std::cout << "number: " << &result->number;
	std::cout << ", " << result->number << std::endl;
	std::cout << "2nd string: " << result->str2;
	std::cout << ", " << *result->str2 << std::endl;
	return 0;
}
