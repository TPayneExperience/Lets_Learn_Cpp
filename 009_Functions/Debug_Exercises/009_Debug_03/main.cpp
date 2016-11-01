
// 3 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace standard;

void square_array(int* arr, int size) {
	for (int i = size - 1; i >= 0; --i) {
		arr[i] *= arr[i];
		cout << arr[i] << endl;
	}
}

int main {
	int x[]{ 1,2,3,4,5 };
	square_array(x);

	string y;
	getline(cin, y);
	return 0;
}






































// line 3 - 'standard' should instead be 'std'
// line 15 - missing parenthesis '()' after main
// line 17 - missing '5' as a second argument for function call







