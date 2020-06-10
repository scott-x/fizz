#ifndef __TIME_H__
#define __TIME_H__

#include <unistd.h>
#include <ctime>
#include <string>

namespace fizz {
  //delay second
	namespace t {
		void _sleep(unsigned int second);
		time_t getTimestamp();
		std::string getTime(int types);
	} // t 
} // fizz

#endif