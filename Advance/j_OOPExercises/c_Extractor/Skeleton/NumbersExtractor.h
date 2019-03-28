#ifndef NUMBERSEXTRACTOR_H_
#define NUMBERSEXTRACTOR_H_

#include "BufferedExtractor.h"

class NumbersExtractor : public BufferedExtractor {
	virtual bool shouldBuffer(char symbol) override {
		return isdigit(symbol);
	}
public:
	NumbersExtractor(std::istream& stream) : BufferedExtractor(stream) {}
};


#endif /* NUMBERSEXTRACTOR_H_ */
