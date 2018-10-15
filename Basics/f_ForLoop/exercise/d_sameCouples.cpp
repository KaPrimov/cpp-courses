#include <iostream>
#include <cmath>

using namespace std;

int main() {
	bool areTheSame = true;
	int maxDiff, prevValue, n, num1, num2, value;
	maxDiff = INT32_MIN;
	cin >> n;
	prevValue = INT32_MIN;
	for (int i = 0; i < n; i++) {
		cin >> num1 >> num2;
		value = num1 + num2;
		if (value != prevValue && prevValue != INT32_MIN) {
			cout << "prev: " << prevValue << endl;
			cout << "max: " << maxDiff << endl;
			areTheSame = false;
			if (abs(value - prevValue) > maxDiff) {
				maxDiff = abs(prevValue - value);
			}
		}
		prevValue = value;
	}
	if (!areTheSame) {
		cout << "No, maxdiff=" << maxDiff;
	} else {
		cout << "Yes, value=" << prevValue;
	}
	return 0;
}
