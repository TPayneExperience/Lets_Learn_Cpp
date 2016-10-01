#include <iostream>

int main() {
	int x = 1;
	int y = x;
	x = 2;
	std::cout << y << std::endl;

	return 0;
}