#include <iostream>
#include <string>
using namespace std;

int main() {
	int i1 = 4;
	int j1 = 345;
	int* const i = &i1;
	i1 = 123;
	//i = &j1;

	char c1 = 'a';
	double d1 = 123.123;
	char* const c = &c1;
	double* const d = &d1;

	string y;
	getline(cin, y);
	return 0;
}