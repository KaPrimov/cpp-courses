#ifndef ARRAYOFPOINTERS_H_
#define ARRAYOFPOINTERS_H_

#include <vector>
#include <memory>

class ArrayOfPointers {
private:
	std::vector<std::shared_ptr<Company>> companies;
public:
	ArrayOfPointers() {}

	void add(Company* pCompany) {
		this->companies.push_back(std::shared_ptr<Company>(pCompany));
	}

	size_t getSize() const {
		return this->companies.size();
	}

	Company* get(const int index) const {
		return companies.at(index).get();
	}

};



#endif /* ARRAYOFPOINTERS_H_ */
