#include <stdio.h>
#include <iostream>
#include "cmd.h"
using namespace std;

void fizz::cmd::Green(std::string str){
	printf("\033[0;32m%s\033[0m",str.c_str()); //green
}

void fizz::cmd::Yellow(std::string str){
	printf("\033[0;33m%s\033[0m",str.c_str()); //yellow
}

void fizz::cmd::Blue(std::string str){
	printf("\033[0;34m%s\033[0m",str.c_str()); //blue
}

void fizz::cmd::Magenta(std::string str){
	printf("\033[0;35m%s\033[0m",str.c_str()); //Magenta
}	

void fizz::cmd::Red(std::string str){
	printf("\033[01;31m%s\033[0m",str.c_str());//red
}

void fizz::cmd::Cyan(std::string str){
	printf("\033[0;36m%s\033[0m",str.c_str()); //cyan
}

fizz::cmd::cmd(){}

fizz::cmd::~cmd(){}

string fizz::cmd::addQuestion(string tip1, string tip2, string re){
	string value;
	Blue(tip1);
	getline(cin,value);
	while (!std::regex_match(value,regex(re))){
		Blue(tip2);
		value = "";
		getline(cin,value);
	}
	return value;
}

