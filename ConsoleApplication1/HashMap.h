#pragma once
#include <string>
#include "Bucket.h"

class HashMap {
public:
	int& operator[] (std::string key);
	void put(std::string key, int value);
	int& get(std::string key);
	void remove(std::string key);
	bool contains(std::string key);
	int hash(std::string);

private:
	Bucket bucket;

};

