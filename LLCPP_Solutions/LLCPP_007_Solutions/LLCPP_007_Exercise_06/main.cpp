
#include <iostream>
using namespace std;

int main() {
	// Python: "%03d" % i*j
	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= 10; j++)
			printf("%03d ", i*j);
		cout << endl;
	}
	return 0;
}