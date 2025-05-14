#include "Replace.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	Replace r(argv[1], argv[2], argv[3]);
	r.replace();
	return (0);
}
