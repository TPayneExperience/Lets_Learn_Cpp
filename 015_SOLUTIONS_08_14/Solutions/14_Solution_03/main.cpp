
#include <iostream>
#include <string>
using namespace std;

class Unicorn_Spottings {
	int count = 0;
public:
	int get_Count() { return count; }
	void add_Spottings(int num) { count += num; }
	void remove_Spottings(int num) { count -= num; }

};

int main() {
	Unicorn_Spottings instance;
	Unicorn_Spottings* p = &instance;

	cout << p->get_Count() << endl;
	p->add_Spottings(4);
	cout << p->get_Count() << endl;
	p->remove_Spottings(2);
	cout << p->get_Count() << endl;


	string y;
	getline(cin, y);
	return 0;
}