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

	bool* p1 = &b;
	char* p2 = &c;
	double* p3 = &d;
	float* p4 = &f;
	int* p5 = &i;
	string* p6 = &s;

	cout << *p1 << endl;
	cout << &p1 << endl;
	cout << p1 << endl;

	cout << *p2 << endl;
	cout << &p2 << endl;
	cout << (void*) p2 << endl;

	cout << *p3 << endl;
	cout << &p3 << endl;
	cout << p3 << endl;

	cout << endl;

	cout << *p4 << endl;
	cout << &p4 << endl;
	cout << p4 << endl;

	cout << *p5 << endl;
	cout << &p5 << endl;
	cout << p5 << endl;

	cout << *p6 << endl;
	cout << &p6 << endl;
	cout << p6 << endl;

	return 0;
}