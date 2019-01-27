#ifndef ORDERED_INSERTER_H 
#define ORDERED_INSERTER_H

#include "Company.h"
#include <vector>
#include <algorithm>
class OrderedInserter {

private:
	std::vector<const Company*>& companies;
public:
	OrderedInserter(std::vector<const Company*>& otherCompanies)
		: companies(otherCompanies) {}
	
	void insert(const Company* company) {
		companies.push_back(company);
		std::sort(companies.begin(), companies.end(), [] (const Company* lhs, const Company* rhs)
			{
				return lhs->getId() < rhs->getId();
			}
		);
	}

};

// Place your code here, as well as any other #include directives you might need

#endif // !ORDERED_INSERTER_H
