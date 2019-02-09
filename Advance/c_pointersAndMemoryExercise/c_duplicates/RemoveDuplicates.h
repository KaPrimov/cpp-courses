#ifndef REMOVE_DUPLICATES_H
#define REMOVE_DUPLICATES_H

#include <set>
#include "Company.h"
#include <list>
#include <string>

void removeDuplicates(std::list<Company*>& companies) {
	std::set<std::string> uniqueNames;
	for (auto it = companies.begin(); it != companies.end();) {
		std::string name = (*it)->getName();
		if (uniqueNames.find(name) == uniqueNames.end()) {
			uniqueNames.emplace(name);
			it++;
		} else {
			it = companies.erase(it);
		}
	}
}

#endif
