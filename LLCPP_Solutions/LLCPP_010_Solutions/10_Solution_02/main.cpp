#include <iostream>
#include <string>
using namespace std;

int add_One(int value);

int main() {
	cout << add_One(4) << endl;

	string y;
	getline(cin, y);
	return 0;
}

int add_One(int value) {
	return value + 1;
}