#include <iostream>
#include "str/str.h"

int main(int argc, char const *argv[])
{
	for (auto x: fizz::str:split("hello world I am scott"," ")){
		std::cout << x << std::endl;
	}	
	return 0;
}