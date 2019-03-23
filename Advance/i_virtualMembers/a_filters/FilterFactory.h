#ifndef FILTERFACTORY_H_
#define FILTERFACTORY_H_

#import "Filter.h"
#include <string>

class RemoveCapitalsFilter : public Filter {
protected:
	virtual bool shouldFilterOut(char symbol) const {
		return std::isupper(symbol);
	}
};


class RemoveLowersFilter : public Filter {
protected:
	virtual bool shouldFilterOut(char symbol) const {
		return std::islower(symbol);
	}
};

class RemoveDigitsFilter : public Filter {
protected:
	virtual bool shouldFilterOut(char symbol) const {
		return std::isdigit(symbol);
	}
};


class FilterFactory {
public:
	Filter* buildFilter(const std::string& typeOfFillter) const {
		if (typeOfFillter == "A-Z") {
			return new RemoveCapitalsFilter();
		} else if (typeOfFillter == "a-z") {
			return new RemoveLowersFilter();
		} else if (typeOfFillter == "0-9") {
			return new RemoveDigitsFilter();
		}
		return nullptr;
	}
};


#endif /* FILTERFACTORY_H_ */
