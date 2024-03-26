#include "Node.h"

Node::Node(std::string key, int value, int hash) {
	this->key = key;
	this->value = value;
	this->hash = hash;
	this->next = nullptr;
}
