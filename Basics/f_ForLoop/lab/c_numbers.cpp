#include <iostream>

using namespace std;

int main() {
	int count, totalSum, number;
	totalSum = 0;
	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> number;
		totalSum += number;
	}

	cout << totalSum;
	
	return 0;
}
