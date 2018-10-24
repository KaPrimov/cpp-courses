#include <iostream>
#include <string>
using namespace std;

int main() {

	int input;
	cin >> input;

	while(input > 0) {
		int lastDigit = input % 10;
		char character = (char)(lastDigit + 33);
		if (lastDigit != 0) {
			for(int i = 0; i < lastDigit; i++) {
				cout << character;
			}
			cout << endl;
		} else {
			cout << "ZERO" << endl;
		}
		input /= 10;
	}

	return 0;
}
