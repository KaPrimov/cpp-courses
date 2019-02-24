#ifndef PARSER_H
#define PARSER_H

#include <istream>
#include <string>
#include <sstream>

template<class T>
class Parser {
	private:
		std::istream& in;
		std::string endLine;
	public: 
	Parser(std::istream& inStream, std::string endLine) : in(inStream), endLine(endLine) {}

	bool readNext(T& next) {
		 std::string line;
		 if (std::getline(this->in, line) && line != this->endLine) {
			std::istringstream lineIn(line);
			lineIn >> next;
			return true;
		}
		return false;
	}
};

#endif // PARSER_H
