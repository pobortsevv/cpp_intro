/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: filestream manipulation 
 *
 *        Version:  1.0
 *        Created:  05.06.2021 14:42:17
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include <iostream>
#include <fstream>

int main(void)
{
	std::ifstream ifs("input");
	std::ofstream ofs("output");
	std::string buff;
	std::string s1 = "school";
	std::string s2 = "university";
	char separator;

	while (ifs >> buff)
	{
		if (buff == s1)
			ofs << s2;
		else
			ofs << buff;
		if (ifs.get(separator))
			ofs << separator;
	}
	ofs.close();
	ifs.close();
	return (0);
}
