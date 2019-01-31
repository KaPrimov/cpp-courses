#ifndef MAKE_COMPANY_H
#define MAKE_COMPANY_H

#include "Company.h"
#include <memory>
// Place your code here
std::shared_ptr<Company> makeCompany(std::vector<std::string>& properties) {
	const int id = std::stoi(properties[0]);
	const std::string name = properties[1];
	std::vector<std::pair<char, char>> employees;
	for (size_t i = 2; i < properties.size(); ++i) {
		employees.emplace_back(properties[i][0], properties[i][1]);
	}
	return std::make_shared<Company>(id, name, employees);
}
#endif // !MAKE_COMPANY_H
