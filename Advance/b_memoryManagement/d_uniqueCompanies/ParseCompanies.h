#ifndef PARSE_COMPANIES_H
#define PARSE_COMPANIES_H

#include "Company.h"
#include <string>
#include <sstream>
#include <unordered_set>
#include <vector>
Company* parseUniqueCompanies(const std::string& input, 
								int& numCompanies,
								std::string(*identifier)(const Company&)) {
		std::istringstream iss(input);
		std::unordered_set<std::string> uniqueIdentifiers;
		std::vector<Company> savedCompanies;
		numCompanies = 0;
		std::string companyLine;
		while(std::getline(iss, companyLine)) {
			std::istringstream singleCompanyLineStream(companyLine);
			int companyId;
			std::string companyName;
			singleCompanyLineStream >> companyId >> companyName;
			Company company(companyId, companyName);
			std::string uniqueIdentifier = identifier(company);
			if (uniqueIdentifiers.find(uniqueIdentifier) == uniqueIdentifiers.end()) {
				savedCompanies.push_back(company);
				uniqueIdentifiers.insert(uniqueIdentifier);
			}
		}
		numCompanies = savedCompanies.size();
		Company* companiesPtr = new Company[numCompanies];
		std::copy(savedCompanies.begin(), savedCompanies.end(), companiesPtr);
		return companiesPtr;
	}

#endif // !PARSE_COMPANIES_H
