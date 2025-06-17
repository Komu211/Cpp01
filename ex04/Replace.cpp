
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
	if (_filename.empty() || _s1.empty())
	{
		std::cout << "Error: filename or s1 is empty" << std::endl;
		return;
	}
	
	std::ifstream inFile(_filename);
	std::string line;

	if (!inFile.is_open())
	{
		std::cout << "Error opening in file" << std::endl;
		return;
	}
	std::ofstream outFile(_filename + ".replace");
	if (!outFile.is_open())
	{
		std::cout << "Error opening out file" << std::endl;
		inFile.close();
		return;
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
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();
}
