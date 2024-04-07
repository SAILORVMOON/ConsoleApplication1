
#include "HashMap.h"
#include <iostream>
int main() {
	HashMap hh = HashMap();
	hh["hahaha"] = 15;
	hh["mn"] = 10;
	hh["nm"] = 56;
	hh["lo"] = 33;
	hh["hahaha"] = 23;
	int a = hh["hahaha"];
	int b = hh["mn"];
	int c = hh["nm"];
	int d = hh["lo"];
	std::cout << a << std::endl << b << std::endl << c << std::endl << d << std::endl;

}