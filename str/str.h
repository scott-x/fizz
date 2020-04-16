#ifndef __STR_H__
#define __STR_H__ 

#include <string>
namespace fizz {
	namespace str {
		using namespace std;
		std::string firstLetterToUpper(string str);
		string getWord(string str, int index);
		bool isLastArrItem(string str[], int index);
		string getContentBetween(string A, string B);
		string toUpper(string str);
		string toLower(string str);
	}
}
#endif