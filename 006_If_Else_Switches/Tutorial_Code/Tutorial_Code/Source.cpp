
#include <iostream>
#include <string>
using namespace std;

int main() {
	for (int tens = 0; tens < 100; tens += 10) {
		cout << "TENS IS AT: " << tens << endl;
		for (int ones = 0; ones < 10; ones++)
			cout << tens + ones << endl;
	}

	string y;
	getline(cin, y);
	return 0;
}