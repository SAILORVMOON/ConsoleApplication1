#include "HashMap.h"

HashMap::HashMap() {
	mas = new Node * [16];
	length = 16;
	for (int i = 0; i < 16; i++) {
		mas[i] = nullptr;
	}
}

HashMap::HashMap(int length) {
	mas = new Node * [length];
	this->length = length;
	for (int i = 0; i < length; i++) {
		mas[i] = nullptr;
	}
}

int& HashMap::operator[](std::string key) {
	int keyHash = hash(key);
	int index = keyHash % 16;
	Node* temp = mas[index];
	if (mas[index] == nullptr) {
		mas[index] = new Node(key, 0, keyHash);
		return mas[index]->value;
	}
	if (temp->next == nullptr) {
		temp->next = new Node(key, 0, keyHash);
		return temp->next->value;
	}
	do {
		if (temp->hash = keyHash) {
			if (temp->key == key) {
				return temp->value;
			}
		}
		temp = temp->next;
	} while (temp->next != nullptr);
	if (temp->hash = keyHash) {
		if (temp->key == key) {
			return temp->value;
		}
	}
	temp->next = new Node(key, 0, keyHash);
	return temp->next->value;
}

void HashMap::put(std::string key, int value) {
	int keyHash = hash(key);
	int index = keyHash % 16;
	if (mas[index] == nullptr) {
		mas[index] = new Node(key, value, keyHash);
	} else {
		Node* temp = mas[index];
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = new Node(key, value, keyHash);
	}
}

int HashMap::get(std::string key) {
	int keyHash = hash(key);
	int index = keyHash % 16;
	if (mas[index] == nullptr) {
		return -1;
	} else {
		Node* temp = mas[index];
		do {
			if (temp->hash = keyHash) {
				if (temp->key == key) {
					return temp->value;
				}
			}
			temp = temp->next;
		} while (temp->next != nullptr);		
	}
	return -1;
}

void HashMap::remove(std::string key) {
	int keyHash = hash(key);
	int index = keyHash % 16;
	Node* temp = mas[index];
	Node* prev = nullptr;
	if (temp == nullptr) {
		return;
	}
	if (temp->hash == keyHash) {
		if (temp->key == key) {
			mas[index] = temp->next;
			delete temp;
			return;
		}
	}
	prev = temp;
	temp = temp->next;
	do {
		if (temp->hash == keyHash) {
			if (temp->key == key) {
				prev->next = temp->next;
				delete temp;
				return;
			}
		}
		prev = temp;
		temp = temp->next;
	} while (temp->next != nullptr);
}

bool HashMap::contains(std::string key) {
	int keyHash = hash(key);
	int index = keyHash % 16;
	Node* temp = mas[index];
	if (temp == nullptr) {
		return false;
	}
	do {
		if (temp->hash == keyHash) {
			if (temp->key == key) {
				return true;
			}
		}
		temp = temp->next;
	} while (temp->next != nullptr);
	return false;
}

int HashMap::hash(std::string key) {
	int keyHash = 0;
	for (char& i : key) {
		keyHash += i;
	}
	return keyHash;
}
