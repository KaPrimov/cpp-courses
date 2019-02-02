#ifndef SERIALIZE_H
#define SERIALIZE_H

#include "Company.h"
#include <string>
#include <sstream>
#include <vector>

namespace local {
	std::vector<byte> serializeCompany(const Company& company) {
		std::vector<byte> companyBytes;
		companyBytes.push_back(company.getId());
		for (char c : company.getName()) {
			companyBytes.push_back(static_cast<byte>(c));
		}
		companyBytes.push_back('\0');
		auto employees = company.getEmployees();
		companyBytes.push_back(employees.size());

		for (auto e : employees) {
			companyBytes.push_back(static_cast<byte>(e.first));
			companyBytes.push_back(static_cast<byte>(e.second));
		}
		return companyBytes;
	}

}
byte* serializeToMemory(std::string allCompaniesData, size_t& bytesWritten) {
	std::istringstream iss(allCompaniesData);
	std::vector<Company> companies;
	Company company;
	std::vector<byte> bytes;
	while (iss >> company) {
		companies.push_back(company);
	}

	bytes.push_back(companies.size());

	for (Company c : companies) {
		std::vector<byte> companyData = local::serializeCompany(c);
		bytes.insert(bytes.end(), companyData.begin(), companyData.end());
	}
	bytesWritten = bytes.size();
	byte* memory = new byte[bytesWritten];
	std::copy(bytes.begin(), bytes.end(), memory);

	return memory;
}

#endif // !SERIALIZE_H
