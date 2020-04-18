# cmd

```cpp
#include <iostream>
#include "fizz.h"
using namespace std;

int main(int argc, char const *argv[])
{
	fizz::cmd::Green("hello world, I am simon");
	return 0;
}
```

```cpp
#include <iostream>
#include "fizz.h"
using namespace std;
int main(int argc, char const *argv[])
{
	string answer = fizz::cmd::addQuestion("what's your name: ", "please input the correct name:", "^[a-z].*");
	cout << "name is: " << answer << endl;;
	return 0;
}
```