#include "Company.h"
#include <algorithm>

bool (*myComparator) (const Company& a, const Company& b);

bool comparator(Company* left, Company* right) {
	return myComparator(*left, *right);
}

void sortBy(Company** start, Company** end, 
			bool (*lessThan)(const Company& a, const Company& b)) {
		myComparator = lessThan;
		std::sort(start, end, comparator);
	}
