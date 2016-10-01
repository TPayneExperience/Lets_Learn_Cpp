#include <iostream>
using namespace std;

int main() {
	switch ('a') {
	case 'b':
		cout << 'b';
	case 'a':
		cout << 'a';
	case 'c':
		cout << 'c';
	}
	return 0;
}