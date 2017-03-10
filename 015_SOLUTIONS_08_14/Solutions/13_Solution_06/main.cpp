
#include <iostream>
#include <string>
using namespace std;

struct Dog {
	int fur = 5;
	string name;
};

int main() {
	Dog StanLee;
	StanLee.name = "Stanley";

	string y;
	getline(cin, y);
	return 0;
}