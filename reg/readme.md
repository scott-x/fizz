# regexp

### example
```cpp
#include <iostream>
#include "reg/reg.h"

int main(int argc, char const *argv[])
{
	std::string s = "hello world";
	if (fizz::reg::matched(s,std::regex("^h.*d$"))){
		std::cout << "matched" << std::endl; 
	}else{
		std::cout << "not matched" << std::endl;
	}
	return 0;
}
```