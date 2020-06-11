#include <iostream>
#include <fizz/reg.h>

int main(int argc, char const *argv[])
{
	std::string test = "U200611_APP";
	bool flag = fizz::reg::matched(test,"^[A-Z][0-9]{6}_[A-Z]{3}$");
	if (flag) {
		std::cout << "matched" << std::endl;
	}else {
		std::cout << "not matched" << std::endl;
	}
	return 0;
}