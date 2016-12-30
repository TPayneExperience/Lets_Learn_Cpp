// 2 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
#include <gsl.h>
using namespace std;

void fibonacci(double num_steps, double last = 0, double current = 1) {
	Expects(num_steps <= 0);
	cout << current << endl;
	if (num_steps > 0) 
		fibonacci(++num_steps, current, last + current);
	Ensures(num_steps >= 0);
}

int main() {
	fibonacci(10);

	string y;
	getline(cin, y);
	return 0;
}






































// line 9 - '<=' should instead be '>='
// line 12 - '++' should instead be '--'
// line 
// line 