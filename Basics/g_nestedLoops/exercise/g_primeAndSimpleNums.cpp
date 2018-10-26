#include <iostream>

using namespace std;

bool isPrime(long number) {
	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	
	long primeSum = 0L, simpleSum = 0L;
	string input;

	while(true) {
		cin >> input;
		if (input == "stop" || input == "STOP") {
			break;
		}
		long currentNum = stol(input);
		if (currentNum < 0) {
			cout << "Number is negative." << endl;
			continue;
		}
		if (isPrime(currentNum)) {
			primeSum += currentNum;
		} else {
			simpleSum += currentNum;
		}
	}
 
	cout << "Sum of all prime numbers is: " << primeSum << endl;
	cout << "Sum of all non prime numbers is: " << simpleSum << endl;

	return 0;
}
