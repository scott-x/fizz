#include <iostream>
#include <fizz/cmd.h>
using namespace std;

int main(int argc, char const *argv[])
{
	fizz::cmd::Green("hello world, I am Green\n");
	fizz::cmd::Yellow("hello world, I am Yellow\n");
	fizz::cmd::Blue("hello world, I am Blue\n");
	fizz::cmd::Magenta("hello world, I am Magenta\n");
	fizz::cmd::Red("hello world, I am Red\n");
	fizz::cmd::Cyan("hello world, I am Cyan\n\n");
	
	string result = fizz::cmd::addQuestion("please input a string starts with a and ends with b:","please input correct string:","^a.*b$");
	
	cout << "the result is : " << result << endl;
	return 0;
}