#include <iostream>

using namespace std;

int main() {

	int count, maxNumber, number;
	maxNumber = INT16_MIN;
	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> number;
		if (number > maxNumber) {
			maxNumber = number;
		}
	}

	cout << maxNumber;
	
	return 0;
}
