#ifndef __SQL_H__
#define __SQL_H__ 

struct Field {
	std::string name;
	std::string type;
}

struct Table {
	std::string name;
	Field[] fields;
}

typedef Tables Table[];

namespace fizz {
	namespace parse {
		Tables getTables(std::string sqlfile);
	}
}

#endif