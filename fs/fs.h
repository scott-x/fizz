#ifndef __FS_H__
#define __FS_H__ 

#include <string>
#include <map>

enum position { Before, After };

typedef struct{
	position p;
	std::string content;
	std::string keywords;
	map<string,string> replace;
}insert;

namespace fizz {
	class fs
	{
	public:
		fs();
		~fs();
		bool isExist(std::string filepath);
		bool isDir(std::string filepath);
		bool isFile(std::string filepath);
		void mkdir(std::string filepath);
		void mkdirp(std::string filepath);
		std::string readFile(std::string filepath);
		void writeFile(std::string filepath, std::string content);
		std::string tab(int n);
		string[] list(std::string folder);
		string[] listOnlyFile(std::string folder);
		string[] listOnlyFolder(std::string folder);
		void rename(std::string _old, std::string _new);
		void copyFile(std::string from, std::string to);
		void copyFolder(std::string from, std::string to);
		void copyAndReplace(std::string from, std::string to,map<string,string> m);
		void readAndReplace(std::string filename, map<string,string> m);
		void createFile(std::string file);
		sdt::string getEnv(std::string);
		void removeFile(std::string filename);
		void removeFolder(std::string folder);
		std::string getDir();
		void insert(Insert *)
	};
}
#endif