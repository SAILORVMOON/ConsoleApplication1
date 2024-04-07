#pragma once
#include <string>

struct Node {
	Node(std::string key, int value, int hash);
	std::string key;
	int value, hash;
	Node* next;
};
