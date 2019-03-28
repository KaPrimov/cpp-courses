#ifndef DIGITSEXTRACTOR_H_
#define DIGITSEXTRACTOR_H_

#include "Extractor.h"

class DigitsExtractor : public Extractor{
	virtual bool process(char symbol, std::string& output) override {
		if (isdigit(symbol)) {
			output = symbol;
			return true;
		}
		return false;
	}
public :
	DigitsExtractor(std::istream& stream) : Extractor(stream) {}
};



#endif /* DIGITSEXTRACTOR_H_ */
