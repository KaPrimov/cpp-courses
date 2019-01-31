#ifndef PARSE_COMPANIES_H
#define PARSE_COMPANIES_H

#include "Company.h"
#include <string>
#include <sstream>

Company* parseUniqueCompanies(const std::string& input, 
								int& numCompanies,
								std::string(*identifier)(const Company&)) {
		std::istringstream iss(input);
	}

#endif // !PARSE_COMPANIES_H
