#ifndef OPERATORS_H
#define OPERATORS_H

#include <ostream>
#include <vector>
#include <string>
#include <sstream>

typedef std::vector<std::string> vectorOfStrings;

vectorOfStrings& operator<<(vectorOfStrings& vectorCalledUpon, const std::string& toBeAdded) {
	vectorCalledUpon.push_back(toBeAdded);
	return vectorCalledUpon;
}

std::string operator+(const std::string& calledUpon, const int& number) {
	std::ostringstream os;
	os << calledUpon << number;
	return os.str();
}

std::ostream& operator<<(std::ostream& out, const vectorOfStrings& vectorInput){
	for (const auto& line : vectorInput) {
		out << line << std::endl;
	}
	return out;
}
#endif // !OPERATORS_H
