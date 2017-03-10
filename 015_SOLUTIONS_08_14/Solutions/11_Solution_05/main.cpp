#include <iostream>
#include <string>
#include <gsl.h>
using namespace std;

inline void string_Check(const string* const p) {
	Ensures(*p != "");
}

int main() {
	//string_Check(new string (""));
	string_Check(new string("asdf"));
	string y;
	getline(cin, y);
	return 0;
}