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
	fizz::cmd::Green("Green");
	fizz::cmd::Yellow("Yellow");
	fizz::cmd::Cyan("Cyan");
	fizz::cmd::Blue("Blue");
	fizz::cmd::Red("Red");
	fizz::cmd::Magenta("Magenta");
	
	return 0;
}