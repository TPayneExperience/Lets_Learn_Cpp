
#include <iostream>
#include <string>
using namespace std;

class Fighter {
	double health;
	double attack;
public:
	Fighter() {
		health = 50;
		attack = 50;
	}
	void print_Info() {
		cout << "Health: " << health << endl;
		cout << "Attack: " << attack << endl;
	}
};

int main() {
	Fighter random_Goon;
	random_Goon.print_Info();

	string y;
	getline(cin, y);
	return 0;
}