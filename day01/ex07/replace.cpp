/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *    Description: filestream manipulation 
 *        Version:  1.0
 *        Created:  05.06.2021 14:42:17
 *       Compiler:  clang++
 *         Author:  sabra
 *
 * ===================================================================
 */

#include <iostream>
#include <fstream>
#include <string>

int check_args(int ac, char **av)
{
	if (ac != 4 || strlen(av[1]) == 0 || strlen(av[2]) == 0 || strlen(av[3]) == 0)
	{
		std::cout << "Wrong arguments" << std::endl;
		return (1);
	}
	return (0);
}

std::string string_toupper(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}

int main(int ac, char **av)
{
	std::string buf;
	std::size_t found;
	std::size_t i = 0;

	if (check_args(ac, av))
		return (1);

	std::ifstream ifs(av[1], std::ios::in);
	if (ifs.fail())
	{
		std::cerr << "Error: " << strerror(errno) << std::endl;
		exit(-1);
	}
	std::ofstream ofs(string_toupper(av[1]) + ".replace", std::ios::out);
	if (ofs.fail())
	{
		std::cerr << "Error: " << strerror(errno) << std::endl;
		ifs.close();
		exit(-1);
	}

	while (std::getline(ifs, buf))
	{
		found = buf.find(av[2]);
		if (found != std::string::npos)
			buf.replace(found, strlen(av[2]), av[3]);
		if (ifs.eof() != 0)
			ofs << buf.data();
		else
			ofs << buf.data() << std::endl;
		i = 0;
	}
	ofs.close();
	ifs.close();
	return (0);
}
