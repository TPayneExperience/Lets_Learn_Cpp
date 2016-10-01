#include <iostream>

int main() {
	std::cout << "Please enter an int: " << std::endl;
	int a;
	std::cin >> a;
	std::cout << ++a << std::endl; //note placement
	a--;
	std::cout << --a << std::endl; //note placement
	return 0;
}