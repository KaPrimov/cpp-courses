#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

int findIndex(std::vector<char> allElements, char searchedelement);



int main() {
	std::string input, currentLetter;
	
	std::getline(std::cin, input);
	std::vector<char> elements(input.begin(), input.end());
	
	std::getline(std::cin, input);
	std::vector<char> firstNumInChars(input.begin(), input.end());

	std::getline(std::cin, input);
	std::vector<char> secondNumInChars(input.begin(), input.end());
	std::string firstNumString = "", secondNumString = "";

	for(std::vector<char>::size_type i = 0; i < firstNumInChars.size(); i++) {
		char letter = firstNumInChars.at(i);
		int index = findIndex(elements, letter);
		if (index > -1) {
			firstNumString.append(std::to_string(index));
		}
	}

	for(std::vector<char>::size_type i = 0; i < secondNumInChars.size(); i++) {
		char letter = secondNumInChars.at(i);
		int index = findIndex(elements, letter);
		if (index > -1) {
			secondNumString.append(std::to_string(index));
		}
	}
	
	int firstNum, secondNum;
	firstNum = std::stoi(firstNumString);
	secondNum = std::stoi(secondNumString);
	std::string totalSum = std::to_string(firstNum + secondNum);

	for (int stringIndex = 0; stringIndex < totalSum.length(); stringIndex++)  {
		int innerIndex = std::stoi(std::string(1, totalSum[stringIndex]));
		std::cout << elements[innerIndex];
	}
	
	return 0;
}

int findIndex(std::vector<char> allElements, char searchedElement) {
		auto match = std::find(allElements.begin(), allElements.end(), searchedElement);
		if (match != allElements.end()) {
			int result = match - allElements.begin();
			return result;
		}
		return -1;
}
