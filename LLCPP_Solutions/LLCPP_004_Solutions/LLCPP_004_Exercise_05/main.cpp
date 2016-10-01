#include <iostream>

int main() {
	int i[2][2][2]{ 1,2,3,4,5,6,7,8 };
	std::cout << i[1][1][1] << std::endl;
	return 0;
}