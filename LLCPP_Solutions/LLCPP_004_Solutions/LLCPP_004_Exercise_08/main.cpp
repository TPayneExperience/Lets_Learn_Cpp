#include <iostream>
#include <string>
using namespace std;

int main() {
	string food1 = "soup";
	string food2 = "salad";
	food1.swap(food2);
	cout << food1 << endl;
	cout << food2 << endl;

	return 0;
}