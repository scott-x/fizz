# t

### `std::string getTime(int types)`

types:

```
//https://www.runoob.com/cplusplus/cpp-date-time.html

/*
   types
   ""                         0  
   "yyyy-mm-dd hh:mm:ss":     1
   "yyyymmdd":                2
   "yyyy年mm月dd日":           3
   "yyyy-mm-dd":              4
   "yyyy/mm/dd":              5
   "mmdd":                    6
   "mm/dd":                   7
   "mm-dd":                   8
   "mm月dd日":                 9
   "hh:mm:ss" :               10
   "mm/dd":                   11
   "hh:mm" :                  12
   "hh时mm分":                13
   "hh时mm分ss秒":             14
   "yyyy":                    15
   "yyyy年":                  16
   "yyyymm":                  17
*/
```

### example

```cpp
#include <iostream>
#include "fizz.h"

int main(int argc, char const *argv[])
{
   fizz::t::_sleep(2);
   std::cout<<fizz::t::getTimestamp()<<std::endl;
   std::cout << fizz::t::getTime(2) << std::endl;
   return 0;
}
```