#include <iostream>
#include <string>
using namespace std;

void combine_Arrays(int* arr1, int* arr2, 
						int size) {
	for (int i = 0; i < size; i++) {
		arr1[i] += arr2[i];
		arr2[i] = 0;
	}
}

int main() {
	int arr1[]{ 1,2,3 };
	int arr2[]{ 4,5,6 };
	combine_Arrays(arr1, arr2, 3);
	for (int i = 0; i < 3; i++)
		cout << arr1[i] << endl;

	string y;
	getline(cin, y);
	return 0;
}