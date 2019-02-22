#ifndef PRINT_UTILS_H
#define PRINT_UTILS_H

#include <vector>
#include <iostream>

template<typename T>
void printVector(std::vector<T>& elements) {
	for (T& element : elements) {
		std::cout << element << " ";
	}
}

#endif // PRINT_UTILS_H
