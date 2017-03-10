#include <iostream>
#include <string>
#include "add_Two.h"
using namespace std;

int main() {
	int x = 5;
	add_Two(x);
	cout << x;

	string y;
	getline(cin, y);
	return 0;
}