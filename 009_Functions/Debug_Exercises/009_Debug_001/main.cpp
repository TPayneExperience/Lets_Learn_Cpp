// 2 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

print_Ham(string ham = "ham") {
	cout << ham >> endl;
}


int main() {
	print_Ham();
	string y;
	getline(cin, y);
	return 0;
}






































// line 7 - missing 'void' before function name
// line 8 - '>>' should instead be '<<'