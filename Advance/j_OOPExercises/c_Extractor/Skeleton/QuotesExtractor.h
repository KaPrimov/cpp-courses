#ifndef QUOTESEXTRACTOR_H_
#define QUOTESEXTRACTOR_H_

#include "BufferedExtractor.h"


class QuotesExtractor : public BufferedExtractor {
private:
	bool inQuotes;
protected:
	virtual bool shouldBuffer(char symbol) {
		if (inQuotes) {
				inQuotes = (symbol != '"');
				return inQuotes;
		} else {
			if (symbol == '"') {
				inQuotes = true;
			}
			return false;
		}
	}

public:
	QuotesExtractor(std::istream& stream) : BufferedExtractor(stream), inQuotes(false) {}
};



#endif /* QUOTESEXTRACTOR_H_ */
