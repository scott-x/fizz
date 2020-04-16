/*
* @Author: scottxiong
* @Date:   2020-04-15 22:02:45
* @Last Modified by:   scottxiong
* @Last Modified time: 2020-04-15 23:22:25
*/
#include <iostream>
#include "str/str.h"
 
int main()
{
	std::string s = "How Are yOu";
    std::cout << fizz::str::toLower(s) << std::endl;
    return 0;
}
