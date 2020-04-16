#include "str.h"
#include <cctype>
#include <algorithm>

void fizz::str::firstLetterToUpper(string str){

}
string fizz::str::getWord(string str, int index){
	return "";
}
bool fizz::str::isLastArrItem(string str[], int index){
	return true;
}
string fizz::str::getContentBetween(string A, string B){
	return "";
}

string fizz::str::toUpper(string str){
	transform(str.begin(),str.end(),str.begin(),::toupper);
	return str;
}

string fizz::str::toLower(string str){
	transform(str.begin(),str.end(),str.begin(),::tolower);
	return str;
}