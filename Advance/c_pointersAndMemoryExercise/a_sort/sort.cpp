#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

#include "Company.h"

int main() {
	std::string input, name;
	int id;
	std::vector<Company> companies;
	std::istringstream iss;
	while(true) {
		std::getline(std::cin, input);
		if (input == "end") {
			break;
		}
		iss.clear();
		iss.str(input);
		iss >> name >> id;
		companies.emplace_back(id, name);
	}
	
	std::getline(std::cin, input);
	if (input == "id") {
		std::sort(companies.begin(), companies.end(), [](const Company& a, const Company& b){
		return a.getId() < b.getId();
		});
	} else {
		std::sort(companies.begin(), companies.end(), [](const Company& a, const Company& b) {
			return a.getName() <b.getName();
		});
	}

	for (Company& company : companies) {
		std::cout << company.toString() << std::endl;
	}
	return 0;
}
