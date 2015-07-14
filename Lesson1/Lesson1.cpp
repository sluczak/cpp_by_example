#include <iostream>
#include <algorithm>
#include "headerFile.h"
#include "subfolder\otherHeaderFile.h"

int main() {
	std::cout << "Hello World" << std::endl;

	int a = 2147483647; // assigned maximum value of int
	std::cout << a << std::endl;
	a = 2147483648; // results in rolling over to a = -2147483648;
	std::cout << a << std::endl;

	unsigned int b = 4294967295; // assigned maximum value of unsigned int
	std::cout << b << std::endl;
	b = -1; // results in rolling over to b = 4294967295;
	std::cout << b << std::endl;


	return 0;
}
