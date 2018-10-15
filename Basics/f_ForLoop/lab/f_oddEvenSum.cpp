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
		if (i % 2 == 0) {
			leftSum += number;
		} else {
			rightSum += number;
		}
}

	if (rightSum == leftSum) {
		cout << "Yes Sum = " << leftSum << endl;
	} else {
		cout << "No Diff = " << abs(leftSum - rightSum) << endl;
	}

	return 0;
}
