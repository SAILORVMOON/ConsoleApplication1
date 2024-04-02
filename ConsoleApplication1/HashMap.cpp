#include "HashMap.h"

int& HashMap::operator[](std::string key) {
	return get(key);
}

void HashMap::put(std::string key, int value) {
}

int& HashMap::get(std::string key) {
	int keyHash = hash(key);
	int a = 9;

	return a;
}

void HashMap::remove(std::string key) {
}

bool HashMap::contains(std::string key) {
	int keyHash = hash(key);
	Node* node = bucket[keyHash];
	do {
		if (node->key == key) {
			return true;
		}
	} while (node->next != nullptr);

	return false;
}

int HashMap::hash(std::string key) {
	int keyHash = 0;
	for (char& i : key) {
		keyHash += i;
	}

	return keyHash % 16;
}
