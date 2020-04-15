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
		void Green(std::string);
		void Yellow(std::string);
		void Blue(std::string);
		void Magenta(std::string);
		void Red(std::string);
		void Cyan(std::string);
		std::string addQuestion(std::string tips1, std::string tips2, std::string re);
	};//cmd
}//fizz

#endif