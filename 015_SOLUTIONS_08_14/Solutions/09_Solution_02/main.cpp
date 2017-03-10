#include <iostream>
#include <string>
using namespace std;

void print(string value = "ham") {
	cout << value << endl;
}

int main() {
	print();
	print("Sandwich");
	string y;
	getline(cin, y);
	return 0;
}