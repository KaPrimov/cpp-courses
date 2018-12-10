#include <iostream>
#include <vector>

int main() {
	int nums, currentNum, sum = 0;
	std::cin >> nums;

	for (int i = 0; i < nums; i++) {
		std::cin >> currentNum;
		sum += currentNum;
	}

	std::cout << sum;

	return 0;
}
