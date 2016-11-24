// 2 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

inline const int f(constexpr int* const p) {
	return 5;
}

int main() {
	int x = 6;
	int p1 = &x;
	cout << f(p1);


	string y;
	getline(cin, y);
	return 0;
}






































// line 7 - 'constexpr' should instead be 'const', 
//			as it's resolved at runtime
// line 13 - missing '*' to designate p1 a pointer