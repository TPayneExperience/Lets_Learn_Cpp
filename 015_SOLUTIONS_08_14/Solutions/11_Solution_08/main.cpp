
#include <iostream>
#include <string>
using namespace std;

string string_Reverser(string s) {
	if (s.length() == 0)
		return s;
	char c = s.back();
	s.pop_back();
	//char c = s[s.length() -1];
	//s.resize(s.length() - 1);
	return c + string_Reverser(s);
}

int main() {
	cout << string_Reverser("Finger licking good");

	string y;
	getline(cin, y);
	return 0;
}