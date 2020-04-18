#ifndef __SQL_H__
#define __SQL_H__ 

typedef struct {
	std::string name;
	std::string type;
}Field;

struct Table {
	std::string name;
	Field *fields;
};

namespace fizz {
	namespace parse {
		Table* getTables(std::string sqlfile);
	}
}

#endif