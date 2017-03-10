#include <iostream>
#include <string>
using namespace std;

int main() {
	int i = 5, j = 0;
	const int* const p = &i;
	i = 6;
	//p = &j;
	//*p = 324;

	string y;
	getline(cin, y);
	return 0;
}