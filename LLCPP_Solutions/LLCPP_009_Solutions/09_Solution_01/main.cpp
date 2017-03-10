#include <iostream>
#include <string>
using namespace std;

int times_Ten(int value) {
	return value * 10;
}

int main() {
	cout << times_Ten(12) << endl;
	string y;
	getline(cin, y);
	return 0;
}