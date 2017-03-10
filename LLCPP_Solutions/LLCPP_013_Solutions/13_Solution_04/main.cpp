
#include <iostream>
#include <string>
using namespace std;

int main() {
	char c[]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	for (int i = 0; i < 7; i++)
		cout << int(c[i]) << endl;

	string y;
	getline(cin, y);
	return 0;
}