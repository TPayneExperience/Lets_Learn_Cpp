
#include <iostream>
#include <string>
using namespace std;

enum Flower
{
	Poppy,
	Daisy,
	Rose,
	Dandelion,
	Daffodil
};

void Flower_Printer(Flower f) {
	switch (f) {
	case Poppy:
		cout << "Poppy" << endl;
		break;
	case Daisy:
		cout << "Daisy" << endl;
		break;
	case Rose:
		cout << "Rose" << endl;
		break;
	case Dandelion:
		cout << "Dandelion" << endl;
		break;
	case Daffodil:
		cout << "Daffodil" << endl;
		break;
	default:
		cout << "Unknown. Kill it with fire!" << endl;
	}
}

int main() {
	Flower_Printer(Poppy);

	string y;
	getline(cin, y);
	return 0;
}