
#include <iostream>
#include <string>
using namespace std;

inline int my_Subtraction(int a, int b) {
	return a - b;
}
inline int my_Subtraction(int a, int b, int c) {
	return a - b - c;
}
inline int my_Subtraction(int a, int b, int c, int d) {
	return a - b - c - d;
}

int main() {
	cout << my_Subtraction(10, 1) << endl;
	cout << my_Subtraction(10, 1, 2) << endl;
	cout << my_Subtraction(10, 1, 2, 3) << endl;

	string y;
	getline(cin, y);
	return 0;
}