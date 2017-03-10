#include <iostream>
#include <string>
#include <gsl.h>
using namespace std;

inline int my_Function(int value) {
	Expects(value > 0);
	return value + 5;
}

int main() {
	cout << my_Function(5);

	string y;
	getline(cin, y);
	return 0;
}