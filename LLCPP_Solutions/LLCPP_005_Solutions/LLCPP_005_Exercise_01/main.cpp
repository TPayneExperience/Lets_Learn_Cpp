#include <iostream>
#include <string>
using namespace std;

int main() {
	bool b = true;
	char c = 'a';
	double d = 3.3;
	float f = 4.1;
	int i = 5;
	string s = "ham";


	cout << &c << endl; 
	// interprets as char[], or string
	// says to continue until null char
	cout << (void *)&c << endl;
	// void * = pointer to any object, 
	//			no type checking, cannot be char*
	// "Give me your address, 
	//		no matter what you are!" -Some Thug
	cout << static_cast<void *>(&c) << endl;
	cout << ' ' << endl;

	cout << &b << endl;
	cout << (void *)&b << endl;
	cout << ' ' << endl;

	cout << &d << endl;
	cout << &f << endl;
	cout << &i << endl;
	cout << &s << endl;

	return 0;
}