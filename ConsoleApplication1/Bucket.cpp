#include "Bucket.h"

Bucket::Bucket() {
	mas = new Node*[16];
}

Bucket::Bucket(int length) {
	mas = new Node*[length];
}

Node* Bucket::operator[](int index) {
	return mas[index];
}
