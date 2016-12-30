// 3 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

int main() {
	int x = True ? 4.2 : 5;
	float z = False ? 4 : 5;
	cout << x << endl;
	cout << z << endl;
	x = 'a' == 'A' ? 1234 : 444;
	z = ' ' == " " ? 22.22 : 0.33;
	cout << x << endl;
	cout << z << endl;

	string y;
	getline(cin, y);
	return 0;
}






































// line 8/9 - true and false should be lowercase
// line 13 - both sets of quotes must be of the same type to be compared








