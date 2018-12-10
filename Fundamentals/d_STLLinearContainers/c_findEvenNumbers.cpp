#include <iostream>
#include <vector>

int main() {
	int size, number;
	std::cin >> size;
	std::vector<int> numbers;
	bool isEvenFound = false;
	for (int i = 0; i < size; i++) {
		std::cin >> number;
		if (number % 2 == 1) {
			numbers.push_back(number);
		} else {
			isEvenFound = true;
		}
	}

	if (!isEvenFound) {
		std::cout << "EVEN not found";
	} else {
		for (std::vector<int>::size_type index = 0; index < numbers.size(); index++) {
		 std::cout << numbers[index];
		}
	}

	return 0;
}
