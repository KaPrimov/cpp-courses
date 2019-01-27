#ifndef COMPANY_MEMORY_UTILS_H 
#define COMPANY_MEMORY_UTILS_H

#include <vector>
#include <sstream>
#include "Company.h"

typedef unsigned char byte;

std::vector<Company> readCompaniesFromMemory(const byte* memory, const int& companyCount) {
	auto companies = new std::vector<Company>;
	for (int i = 0; i < companyCount; ++i) {
    	int id = *memory++;
    	std::ostringstream oss;
    	do {
    		oss << *memory++;
    	} while (*memory != 0);
    	memory++;
    	std::string name = oss.str();
   		int empl_count = *memory++;
    	std::vector<std::pair<char, char> > employees;
    	for (int j = 0; j < empl_count; ++j) {
      		byte first_name = *memory++;
      		byte last_name = *memory++;
      		employees.emplace_back(first_name, last_name);
    	}
    	Company company = Company(id, name, employees);
    	companies->push_back(company);
  }
  return *companies;
}

#endif // !COMPANY_MEMORY_UTILS_H

