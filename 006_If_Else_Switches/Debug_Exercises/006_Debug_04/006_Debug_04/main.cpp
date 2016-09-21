// 2 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

int main() {
	switch (1) {
	case 1:
		cout << "output this." << endl;
	case 2:
		cout << "don't output this." << endl;
	default:
		cout << "never see this";
	}


	switch (5 4) {
	case 1:
		cout << "never see this";
	default:
		cout << "see this";
	}

	string y;
	getline(cin, y);
	return 0;
}






































// line 10/11 - missing 'break'
// line 18 - missing some operator. +, *, ...







