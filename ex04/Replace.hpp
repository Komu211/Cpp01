#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>



class Replace
{
private:
	std::string _filename;
	std::string _s1;
	std::string _s2;

public:
	Replace(std::string filename, std::string s1, std::string s2);
	void replace();
	~Replace();
};


#endif
