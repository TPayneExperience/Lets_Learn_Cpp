
// 5 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

enum Colors{ 
	red = 0xFF0000;
	blue = 0x00FF00;
	green = 0x0000FF;
};

int main() {
	cout << lint(Colors::red);
	string y;
	getline(cin, y);
	return 0;
}






































// line 8 - missing 'class' between enum and colors
// line 9/10/11 - ';' should instead be commas ','
// line 15 - 'lint' should instead be 'int'





