#ifndef FIND_H
#define FIND_H

#include "Company.h"
#include <vector>

Company* find(std::vector<Company*> companies, int id) {
	for (Company* company : companies) {
		if (company->getId() == id) {
			return company;
		}
	}
	return nullptr;
} 

#endif // !FIND_H

