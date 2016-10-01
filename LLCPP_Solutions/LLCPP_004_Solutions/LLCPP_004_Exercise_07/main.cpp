#include <iostream>

int main() {
	char a[] = "\n\t\\\'\"\0";
	std::cout << a << std::endl;
	return 0;
}