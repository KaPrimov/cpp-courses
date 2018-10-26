#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int num1, num2;
	int oddSum = 0;
	int evenSum = 0;
	cin >> num1 >> num2;
	for(int currentNum = num1; currentNum <= num2; currentNum++) {
		string digitString = to_string(currentNum);
		for(int index = 0; index < digitString.length(); index++) {
			int digitValue = (int) (digitString[index] - '0');
			if (index % 2 == 0) {
				evenSum += digitValue;
			} else {
				oddSum += digitValue;
			}
		}

		if (oddSum == evenSum) {
			cout << digitString << " ";
		}
		oddSum = 0;
		evenSum = 0;
	}

	return 0;
}
