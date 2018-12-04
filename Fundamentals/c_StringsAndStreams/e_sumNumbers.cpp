#include <iostream>
#include <vector>
#include <string>

int main() {
	std::string input;
	getline(std::cin, input);
	unsigned int sum = 0;
	for (unsigned int index = 0; index < input.size(); index++) {
		if (isdigit(input[index])) {
			sum += (input[index] - 48);
		}
	}
	
	std::cout << sum;
	return 0;
}
