#include <iostream>

using namespace std;

int main() {

	int count, minNumber, number;
	minNumber = INT16_MAX;
	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> number;
		if (number < minNumber) {
			minNumber = number;
		}
	}

	cout << minNumber;
	
	return 0;
}
