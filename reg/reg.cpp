#include "reg.h"

//https://www.cplusplus.com/reference/regex/regex_match/
bool fizz::reg::matched(std::string str,std::regex re){
	return std::regex_match(str,re);
}