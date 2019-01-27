#include <iostream>
#include <vector>

int main() {

	int size;
	long currentNumber;
	std::cin >> size;
	std::vector<long> elements;
	
	for (int i = 0; i < size; i++) {
		std::cin >> currentNumber;
		if (elements.empty()) {
			elements.push_back(currentNumber);
		} else {
			bool isInserted = false;
			for (int elementIdx = 0; elementIdx < elements.size(); elementIdx++) {
				if (elements[elementIdx] < currentNumber) {
					elements.insert(elements.begin() + elementIdx, currentNumber);
					isInserted = true;
					break;
				}
			}
			if (!isInserted) {
				elements.push_back(currentNumber);
			}
		}
	}

	for (int i = 0; i < elements.size(); i++) {
		std::cout << elements[i] << " ";
	}

	return 0;
}
