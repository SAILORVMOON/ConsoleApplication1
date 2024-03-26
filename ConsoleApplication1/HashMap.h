#pragma once
#include <string>
#include "Bucket.h"

class HashMap {
public:
	HashMap operator[] (int index);
	void put(std::string key, int value);
	int get(std::string key);
	void remove(std::string key);
	bool contains(std::string key);

private:
	Bucket 

};

