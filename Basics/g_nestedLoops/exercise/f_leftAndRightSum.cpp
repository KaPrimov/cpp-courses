#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int num1, num2;
	int rightSum = 0;
	int leftSum = 0;
	cin >> num1 >> num2;
	for(int currentNum = num1; currentNum <= num2; currentNum++) {
		string digitString = to_string(currentNum);
		for(int index = 0; index < digitString.length() / 2; index++) {
			int leftDigitValue = (int) (digitString[index] - '0');
			int rightDigitValue = (int) (digitString[digitString.length() - index - 1] - '0');
			leftSum += leftDigitValue;
			rightSum += rightDigitValue;
		}

		if (rightSum < leftSum) {
			rightSum += (int) (digitString[2] - '0');
		} else if (leftSum < rightSum) {
			leftSum += (int) (digitString[2] - '0');
		}

		if (rightSum == leftSum) {
			cout << digitString << endl;
		}
		rightSum = 0;
		leftSum = 0;
	}

	return 0;
}
