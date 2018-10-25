#include <iostream>

using namespace std;

bool isPrime(int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	
	int primeSum = 0, simpleSum = 0;
	string input;

	while(true) {
		cin >> input;
		if (input == "stop") {
			break;
		}
		if (isPrime(stoi(input))) {
			primeSum += stoi(input);
		} else {
			simpleSum += stoi(input);
		}
	}

	cout << "Sum of all prime numbers is: " << primeSum << endl;
	cout << "Sum of all non prime numbers is: " << simpleSum << endl;

	return 0;
}
