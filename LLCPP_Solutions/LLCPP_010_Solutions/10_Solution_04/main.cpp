#include <iostream>
#include <string>
using namespace std;

#define MY_CHAR 'a'
#define NEG_INT -1
#define NEG_DOUBLE -2.2

int main() {

	cout << MY_CHAR << endl;
	cout << NEG_INT << endl;
	cout << NEG_DOUBLE << endl;

	string y;
	getline(cin, y);
	return 0;
}