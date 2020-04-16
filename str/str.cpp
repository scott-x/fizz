#include "str.h"
#include <cctype>
#include <algorithm>
#include <iostream>

void fizz::str::firstLetterToUpper(string str){
	bool lastIsSpace;
	std::string another = toLower(str) ;
	for(auto c : another) {
		if (c==32) {
			lastIsSpace = true;
			// continue;
		}
		if (lastIsSpace && c>=97 && c<=122) {
			c -=32;
			lastIsSpace = false;
		}
		std::cout << c << std::endl;
	}
	std::cout <<"another:" << another<< std::endl;
}
std::string fizz::str::getWord(string str, int index){
	return "";
}
bool fizz::str::isLastArrItem(string str[], int index){
	return true;
}
std::string fizz::str::getContentBetween(string A, string B){
	return "";
}

std::string fizz::str::toUpper(string str){
	transform(str.begin(),str.end(),str.begin(),::toupper);
	return str;
}

std::string fizz::str::toLower(string str){
	transform(str.begin(),str.end(),str.begin(),::tolower);
	return str;
}