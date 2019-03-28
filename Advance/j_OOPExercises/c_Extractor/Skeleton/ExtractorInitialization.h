#ifndef EXTRACTORINITIALIZATION_H_
#define EXTRACTORINITIALIZATION_H_

#include <string>
#include <vector>
#include <memory>

#include "DigitsExtractor.h"
#include "Extractor.h"
#include "NumbersExtractor.h"

#include "QuotesExtractor.h"

std::shared_ptr<Extractor> getExtractor(const std::string& extractType, std::istream& stream) {
	if (extractType == "digits") {
		return std::make_shared<DigitsExtractor>(stream);
	}
	else if (extractType == "numbers") {
		return std::make_shared<NumbersExtractor>(stream);
	}
	else if (extractType == "quotes") {
		return std::make_shared<QuotesExtractor>(stream);
	}

	return nullptr;
}




#endif /* EXTRACTORINITIALIZATION_H_ */
