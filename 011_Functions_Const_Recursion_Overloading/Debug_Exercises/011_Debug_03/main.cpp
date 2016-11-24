// 2 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
#include <gsl.h>
using namespace std;

const long int area(int w, int h) {
	Expects(w > 0);
	Expects(h < 0);
	return w*h;
}

const double area(double w, double h, string s) {
	Ensures(w*w > 0);
	return w*h;
}


int main() {
	cout << area(10, 1);
	string y;
	getline(cin, y);
	return 0;
}






































// line 10 - '>' should be used instead of '<'
// line 15 - 'w*w' should instead be 'w*h'