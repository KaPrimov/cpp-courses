#include <iostream>

using namespace std;

int main() {
	
	double number;
	cin >> number;

	if (number != 0 && (number < 100 || number > 200)) {
		cout << "invalid";
	}

	return 0;
}
