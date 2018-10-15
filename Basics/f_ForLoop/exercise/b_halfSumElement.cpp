#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int sum = 0;
	int maxNum = INT32_MIN;

	for (int i=0; i<n; i++) {
		int number;
		cin >> number;
		if (number > maxNum) {
			if (maxNum != INT32_MIN) {
				sum += maxNum;
			}
			maxNum = number;
		} else {
			sum += number;
		}
	}
	if (sum == maxNum) {
		cout << "Yes" << endl << "Sum = " << sum << endl;
	} else {
		cout << "No" << endl << "Diff = " << abs(sum - maxNum) << endl;
	}

	return 0;
}
