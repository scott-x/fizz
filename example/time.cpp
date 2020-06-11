#include <iostream>
#include <fizz/time.h>

int main(int argc, char const *argv[])
{
	fizz::t::_sleep(2);
	std::cout<<fizz::t::getTimestamp()<<std::endl;
	std::cout << fizz::t::getTime(2) << std::endl;
	return 0;
}