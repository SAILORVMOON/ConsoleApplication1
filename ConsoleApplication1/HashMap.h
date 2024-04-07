#pragma once
#include <string>
#include "Node.h"

class HashMap {
public:
	HashMap();
	HashMap(int length);
	int& operator[] (std::string key);
	void put(std::string key, int value);
	int get(std::string key);
	void remove(std::string key);
	bool contains(std::string key);
	int hash(std::string);

private:
	Node** mas;
	int length;
};

