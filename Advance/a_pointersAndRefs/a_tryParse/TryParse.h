#include <cctype>
#include <string>

bool isDigit(std::string inputToBeCheched);

bool tryParse(std::string firstString, int& numberVariable) {
	bool isNum = isDigit(firstString);
	if (isNum) {
		numberVariable = stoi(firstString);
		return true;
	}
	return false;
}

bool isDigit(std::string inputToBeCheched) {
	std::string::const_iterator it = inputToBeCheched.begin();
	if ('-' == *it) {
		++it;
	}
	while (it != inputToBeCheched.end() && std::isdigit(*it)) ++it;
	return !inputToBeCheched.empty() && it == inputToBeCheched.end();
}
