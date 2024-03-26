#pragma once
#include "Node.h"

class Bucket {
public:
	Bucket();
	Bucket(int length);

	Node* operator[](int index);

private:
	Node** mas;

};

