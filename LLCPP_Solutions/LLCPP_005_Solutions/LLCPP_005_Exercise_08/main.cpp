#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[]{ 1,2,3,4,5 };
	int* p = a+4;
	cout << *--p << endl;

	return 0;
}