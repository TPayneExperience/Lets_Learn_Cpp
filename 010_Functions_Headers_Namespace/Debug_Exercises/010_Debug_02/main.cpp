// 3 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

int poof();

int main() {
	poof(5);

	string y;
	getline(cin, y);
	return 0;
}

void poof() {
	cout >> "poof!";
}




































// line 7 - return type should be void, not int
// line 10 - no arguments should be passed in
// line 18 - should be using '<<' instead of '>>'