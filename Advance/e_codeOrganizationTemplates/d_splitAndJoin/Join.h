#ifndef JOIN_H
#define JOIN_H

#include <vector>
#include <string>
#include <sstream>

template<typename T>
std::string join(std::vector<T>& elements, std::string& joinStr) {
	std::ostringstream oss;
	for (size_t i = 0; i < elements.size(); i++) {
		oss << elements[i];
		if (i < elements.size() - 1) {
			oss << joinStr;
		}
	}
	return oss.str();
};

#endif // JOIH_H
