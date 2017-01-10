
// 3 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std

int main() {
	int i = 5;
	int& j == i;
	int* p = j;

	cout << i << endl;
	cout << &i << endl;
	cout << &j << endl;
	cout << p << endl;
	cout << *p << endl;
	cout << &p << endl;

	string y;
	getline(cin, y);
	return 0;
}






































// line 6 - missing ';' semicolon at end
// line 10 - remove extra '=' equal sign to set val
// line 11 - missing '&' to left of 'j'
