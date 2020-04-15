/*
* @Author: scottxiong
* @Date:   2020-04-15 22:02:45
* @Last Modified by:   scottxiong
* @Last Modified time: 2020-04-15 23:22:25
*/
#include <iostream>
#include "cmd/cmd.h"

int main(int argc, char const *argv[])
{
	fizz::cmd *c;
	c->Magenta("hello world\n");
	std::string name = c -> addQuestion("what's your name: ","please input correct name: ","^[a-zA-Z].*");
	std::cout << "name is " << name << std::endl;
	delete c;
	return 0;
}