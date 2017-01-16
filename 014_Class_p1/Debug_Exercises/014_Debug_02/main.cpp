
// 4 ERRORS - SCROLL DOWN FOR SOLUTIONS

#include <iostream>
#include <string>
using namespace std;

class GuitarCase {
	int guns;
public:
	Guitar_Case(): guns(19){}
	int get_Gun_Count() { return guns; }
	void remove_Gun() { --guns }
};

int main() {
	Guitar_Case g;
	Guitar_Case* p = g;
	cout << g.get_Gun_Count() << endl;
	g.remove_Gun();
	p->remove_Gun;
	cout << p->get_Gun_Count() << endl;

	string y;
	getline(cin, y);
	return 0;
}






































// line 8 - '_' underscore missing in name, all other 
//			instances of it have underscore in name
// line 13 - missing ';' semicolon before final curly brace
// line 18 - missing '&' before 'g' to get address
// line 21 - missing '()' parenthesis after function to call it.







