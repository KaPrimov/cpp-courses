#ifndef PRINT_UTILS_H
#define PRINT_UTILS_H

#include <vector>
#include <iostream>
#include <sstream>
#include <set>

template<typename T>
void printVector(std::vector<T>& elements) {
	for (T& element : elements) {
		std::cout << element << " ";
	}
}

template<typename T>
void printContainer(typename T::iterator start, typename T::iterator end) {
	while(start != end) {
		std::cout << *start << " ";
		++start;
	}
	std::cout << std::endl;
}
#endif // PRINT_UTILS_H
