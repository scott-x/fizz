#include "reg.h"
#include <regex>
//https://www.cplusplus.com/reference/regex/regex_match/
bool fizz::reg::matched(std::string str,std::string re){
	return std::regex_match(str,std::regex(re));
}