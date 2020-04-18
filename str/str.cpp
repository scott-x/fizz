#include "str.h"
#include <cctype>
#include <algorithm>
#include <iostream>

std::string fizz::str::firstLetterToUpper(string str){
	bool lastIsSpace;
	std::string another;
	for(auto c : toLower(str) ) {
		if (c==32) {
			lastIsSpace = true;
			// continue;
		}
		if (lastIsSpace && c>=97 && c<=122) {
			c -=32;
			lastIsSpace = false;
		}
		//https://www.cnblogs.com/aminxu/p/4686320.html
		another.append(1,c);
	}
	
	//first letter to upper
	if (another[0]>=97 && another[0]<=122){
		another[0] -=32;
	}
	return another;
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
