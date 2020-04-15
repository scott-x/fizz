/*
* @Author: scottxiong
* @Date:   2020-04-15 22:02:45
* @Last Modified by:   scottxiong
* @Last Modified time: 2020-04-15 23:22:25
*/
#include <iostream>
#include "t/time.hpp"

int main(int argc, char const *argv[])
{
	micky::t::_sleep(2);
	std::cout<<micky::t::getTimestamp()<<std::endl;
	std::cout << micky::t::getTime(2) << std::endl;
	return 0;
}