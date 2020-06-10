#ifndef __CMD_H__
#define __CMD_H__ 

#include <string>
#include <map>
#include <regex>

//fizz
namespace fizz {
	class cmd {
	public:
		cmd();
		~cmd();
	public:
		static void Green(std::string);
		static void Yellow(std::string);
		static void Blue(std::string);
		static void Magenta(std::string);
		static void Red(std::string);
		static void Cyan(std::string);
		static std::string addQuestion(std::string tips1, std::string tips2, std::string re);
	};//cmd
}//fizz

#endif