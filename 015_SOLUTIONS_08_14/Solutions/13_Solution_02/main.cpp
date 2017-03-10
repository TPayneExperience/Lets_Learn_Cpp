
#include <iostream>
#include <string>
using namespace std;
enum Names {
	Alan = 'b',
	Brett,
	Chris,
	Dan,
	Ellen
};

int main() {
	Names a = Alan;
	Names b = Brett;
	Names c = Chris;
	Names d = Dan;
	Names e = Ellen;

	cout << a;

	string y;
	getline(cin, y);
	return 0;
}