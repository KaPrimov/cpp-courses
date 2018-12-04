#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<int> numbers;
	std::string input;
	getline(std::cin, input);

	for (unsigned int index = 0; index < input.size(); index++) {
		if (isdigit(input[index])) {
			numbers.push_back(input[index] - 48);
		}
	}
	
	for (int num : numbers) {
		std::cout << num;
	}

	return 0;
}
