
#include "Replace.hpp"
#include <fstream>
#include <iostream>


Replace::Replace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
}

Replace::~Replace()
{
}

void Replace::replace()
{
	std::ifstream inFile(_filename);
	std::ofstream outFile(_filename + ".replace");
	std::string line;

	if (!inFile.is_open())
	{
		std::cout << "Error opening file" << std::endl;
	}
	while (std::getline(inFile, line))
	{
		size_t pos = line.find(_s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, _s1.length());
			line.insert(pos, _s2);
			pos = line.find(_s1, pos + _s2.length());
		}
		outFile << line << std::endl;
	}
}
