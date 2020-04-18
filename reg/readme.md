# regexp

### example
```cpp
#include <iostream>
#include "fizz.h"
using namespace std;
int main(int argc, char const *argv[])
{
	bool res = fizz::reg::matched("u200","^[0-9].*");
	if (res){
		cout << "matched"<<endl;
	}else{
		cout << "not matched"<<endl;
	}
	return 0;
}
```