#include <iostream>
#include <string>
using namespace std;

void some_Function(int arr[]) {
	cout << arr[0];
}

int main() {
	int arr1[]{ 1 };
	some_Function(arr1);

	string y;
	getline(cin, y);
	return 0;
}