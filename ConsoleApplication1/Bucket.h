#pragma once
#include "Node.h"

class Bucket {
public:
	Bucket();
	Bucket(int length);

	Node* get(int index);
	Node* operator[](int index);

private:
	Node** mas;

};

