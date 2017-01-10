
// 3 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream
#include <string>
using namespace std;

int main() 
	int a = 5;
	int& r = &a;
	r = 7;
	cout << a;
	string y;
	getline(cin, y);
	return 0;
}






































// line 4 - '>' missing after 'iostream'
// line 8 - missing '{' curly brace after 'main()'
// line 10 - second '&' next to 'a' unnecessary
