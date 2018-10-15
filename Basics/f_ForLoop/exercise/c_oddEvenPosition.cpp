#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
	int n;
	const double minNumber = -1000000000.00;
	const double maxNumber = 1000000000.00;
	double oddSum = 0.0;
	double oddMin = maxNumber;
	double oddMax = minNumber;
	double evenSum = 0.0;
	double evenMin = maxNumber;
	double evenMax = minNumber;
	double number;
	cin >> n;

	for(int i = 1; i <= n; i++) {
		cin >> number;
		if (i % 2 == 0) {
			evenSum += number;
			if (number > evenMax) {
				evenMax = number;
			}
			if (number <= evenMin) {
				evenMin = number;
			}
		} else {
			oddSum += number;
			if (number > oddMax) {
				oddMax = number;
			} 
			if (number <= oddMin) {
				oddMin = number;
			}
		}
	}
	cout << "OddSum=" << oddSum << endl;
	if (oddMin == maxNumber) {
		printf("OddMin=No\n");
	} else {
		printf("OddMin=%g\n", oddMin);
	}
	if (oddMax == minNumber) {
		printf("OddMax=No\n");
	} else {
		printf("OddMax=%g", oddMax);
	}
	cout << "EvenSum=" << evenSum << endl;
	if (evenMin == maxNumber) {
		printf("EvenMin=No\n");
	} else {
		printf("EvenMin=%g\n", evenMin);
	}
	if (evenMax == minNumber) {
		printf("EvenMax=No\n");
	} else {
		printf("EvenMax=%g", evenMax);
	}
	return 0;
}
