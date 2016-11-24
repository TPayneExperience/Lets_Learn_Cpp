// 4 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <sting>
using namespace std;

const long int square(const int& i) { // hint
	return i*I;
}

int main() {
	const int j = square(10);
	j *= 10;
	cout << j;
	string y;
	getline(cin, y);
	return 0;
}






































// line 4 - 'string' is misspelled
// line 7 - parameters should instead be '(int i)'
//			as const refs on small size items is inefficient
// line 8 - 'I' should be lowercase
// line 12/13 - either const should be removed or 
//				line 13 should be removed