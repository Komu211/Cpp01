#pragma once

#include <string>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		enum _logLevels
		{
			DEBUG,
			INFO,
			WARNING,
			ERROR,
			UNKNOWN
		};
		_logLevels stringToLogLevel(std::string level);

};
