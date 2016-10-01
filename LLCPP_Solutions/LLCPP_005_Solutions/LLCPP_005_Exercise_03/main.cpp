#include <iostream>
#include <string>
using namespace std;

int main() {
	//int x, y, z;
	int x = 4;
	int y = 5;
	int z = 6;
	int& a = x;
	int& b = y;
	int& c = z;
	int myArray[]{ a,b,c };
	cout << myArray[0] << endl;
	cout << myArray[1] << endl;
	cout << myArray[2] << endl;

	return 0;
}