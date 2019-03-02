#include <string>
#include <iostream>

#include "BigInt.h"

bool isDividedBy5(const BigInt& num);
bool isDividedBy9(const BigInt& num);
size_t digitSum(const BigInt& num);

int main() {

	std::string startNumString, lastNumString;
	std::cin >> startNumString >> lastNumString;

	BigInt rangeEnd(lastNumString);

	BigInt firstInRange;
	for (BigInt num = startNumString; num < rangeEnd; num += 1) {
		if (isDividedBy5(num) && isDividedBy9(num)) {
			firstInRange = num;
			break;
		}
	}

	for (BigInt num = firstInRange; num < rangeEnd; num += 45) {
		std::cout << num << std::endl;
	}

	return 0;
}

bool isDividedBy5(const BigInt& num) {
	const std::string digits = num.getDigits();
	const int lastIndex = digits.size() - 1;
	return digits[lastIndex] == '5' || digits[lastIndex] == '0';
}

bool isDividedBy9(const BigInt& num) {
	return digitSum(num) % 9 == 0;
}

size_t digitSum(const BigInt& num) {
	std::string digits = num.getDigits();
	size_t sum = 0;
	for (size_t i = 0; i < digits.size(); ++i ) {
		sum += digits[i] - '0';
	}
	return sum;
}


