#include <iostream>

int main() {
	char c[2][5]{ 'a', 'b', 'c', 'd', 'e' };
	c[1][0] = 'f';
	c[1][1] = 'g';
	c[1][2] = 'h';
	c[1][3] = 'i';

	char d[2][5]{ { 'a', 'b', 'c', 'd', 'e' },{ 'f', 'g', 'h', 'i' } };
	char e[2][5]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' };

	std::cout << c[1][3] << std::endl;
	std::cout << d[1][3] << std::endl;
	std::cout << e[1][3] << std::endl;
	return 0;
}