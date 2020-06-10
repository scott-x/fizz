#include "fs.h"

fizz::fs::fs(){}
fizz::fs::~fs(){}

bool fizz::fs::isExist(string filepath){
	return true;
}
bool fizz::fs::isDir(string filepath){
	return true;
}
bool fizz::fs::isFile(string filepath){
	return true;
}
void fizz::fs::mkdir(string filepath){

}
void fizz::fs::mkdirp(string filepath){

}
string fizz::fs::readFile(string filepath){
	return "";
}
void fizz::fs::writeFile(string filepath, string content){

}
string fizz::fs::tab(int n){
	return "";
	
}
string* fizz::fs::list(string folder){
	string *s = new string[2];
	s[0] ="hello";
	s[1] ="world";
	return s;
}
string* fizz::fs::listOnlyFile(string folder){
	string *s = new string[2];
	s[0] ="hello";
	s[1] ="world";
	return s;
}
string* fizz::fs::listOnlyFolder(string folder){
	string *s = new string[2];
	s[0] ="hello";
	s[1] ="world";
	return s;
}
void fizz::fs::rename(string _old, string _new){

}
void fizz::fs::copyFile(string from, string to){

}
void fizz::fs::copyFolder(string from, string to){

}
void fizz::fs::copyAndReplace(string from, string to,map<string,string> m){

}
void fizz::fs::readAndReplace(string filename, map<string,string> m){

}
void fizz::fs::createFile(string file){

}
string getEnv(string){
	return "";
}
void fizz::fs::removeFile(string filename){

}
void fizz::fs::removeFolder(string folder){

}
string fizz::fs::getDir(){
	return "";
}
void fizz::fs::insert(Insert *){

}