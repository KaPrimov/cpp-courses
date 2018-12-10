#include <iostream>
#include <vector>

int main() {
	int inputRows, inputCols, number;
	std::cin >> inputRows >> inputCols;
	int evensCount = 0;
	
	for (int row = 0; row < inputRows; row++) {
		for (int col = 0; col < inputCols; col++) {
			std::cin >> number;
			if (number % 2 == 0) {
			evensCount++;
			}
		}
	}

	std::cout << evensCount;
	return 0;
}
