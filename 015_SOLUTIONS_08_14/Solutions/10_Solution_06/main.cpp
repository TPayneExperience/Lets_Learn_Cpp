#include <iostream>
#include <string>
using namespace std;

namespace cheese {
	namespace bolognia {
		void print_Sandwich() {
			cout << "sandwich" << endl;
		}
	}
}

int main() {
	namespace boleese = cheese::bolognia;
	boleese::print_Sandwich();

	string y;
	getline(cin, y);
	return 0;
}