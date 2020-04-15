# cmd

```cpp
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
```