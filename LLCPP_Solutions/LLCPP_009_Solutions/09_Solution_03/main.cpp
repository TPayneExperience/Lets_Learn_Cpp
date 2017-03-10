#include <iostream>
#include <string>
using namespace std;

void mult_Array(double* arr, int size, 
					double multiplier) {
	for (int i = 0; i < size; i++)
		arr[i] *= multiplier;
}

int main() {
	double my_Array[]{ 2,6 };
	mult_Array(my_Array, 2, 10);
	cout << my_Array[0] << endl;
	cout << my_Array[1] << endl;

	string y;
	getline(cin, y);
	return 0;
}