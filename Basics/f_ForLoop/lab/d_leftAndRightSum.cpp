#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int count, number, leftSum, rightSum;
	cin >> count;
	leftSum = 0;
	rightSum = 0;
	for (int i = 0; i < count; i++) {
		cin >> number;
		leftSum += number;
	}

	for (int i = 0; i < count; i++) {
		cin >> number;
		rightSum += number;
	}

	if (rightSum == leftSum) {
		cout << "Yes, sum = " << leftSum << endl;
	} else {
		cout << "No, diff = " << abs(leftSum - rightSum) << endl;
	}

	return 0;
}
