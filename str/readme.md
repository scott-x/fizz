# str

```cpp
#include <iostream>
#include "str/str.h"
 
int main()
{
	std::string s = "How Are yOu";
    std::cout << fizz::str::toLower(s) << std::endl; //how are you
    std::string s = " hello WoDrf";
	std::cout << fizz::str::firstLetterToUpper(s);
    return 0;
}
```