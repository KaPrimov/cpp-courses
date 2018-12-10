#include <iostream>

int main() {
	int searchedNumber, inputRow, inputCol, currentNumber;
	bool isFound = false;

	std::cin >> searchedNumber >> inputRow >> inputCol;

	for (int row = 0; row < inputRow; row++) {
		for (int col = 0; col < inputCol; col++) {
			std::cin >> currentNumber;
			if (currentNumber == searchedNumber) {
				isFound = true;
				std::cout << row << col << std::endl;
			}
		}
	}

	if (!isFound) {
		std::cout << "Number not found";
	}

	return 0;
}
