#include <iostream>
#include <string>
using namespace std;

int main() {
	char s[] = "Ham Sandwich";
	while (strlen(s)) {
		s[strlen(s) - 1] = '\0';
		cout << s << endl;
	}

	return 0;
}