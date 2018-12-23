#include <iostream>
#include <string>
#include <sstream>
#include <stack>

int main() {
	std::string input;
	std::stack<std::stack<std::string>> allSentences;
	while (std::getline(std::cin, input)) {
		if ("end" == input) {
			break;
		}
		std::istringstream iss(input);
		std::stack<std::string> currentWords;
		std::string currentWord;

		while(std::getline(iss, currentWord, ' ')) {
			currentWords.push(currentWord);
		}
		allSentences.push(currentWords);
	}

	while(!allSentences.empty()) {
		std::stack<std::string> currentWords;
		currentWords = allSentences.top();
		allSentences.pop();
		while (!currentWords.empty()) {
			std::cout << currentWords.top() << " ";
			currentWords.pop();
		}
	}

	return 0;
}
