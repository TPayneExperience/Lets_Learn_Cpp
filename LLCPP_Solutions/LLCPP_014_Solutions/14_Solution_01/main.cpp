
#include <iostream>
#include <string>
using namespace std;

class Carrot {
public:
	int fiber = 4;
};
class Celery {
public:
	int fiber = 10;
};
class Laxative {
public:
	int fiber = 300000;
};

int main() {
	Carrot a;
	Celery b;
	Laxative c;
	cout << c.fiber;

	string y;
	getline(cin, y);
	return 0;
}