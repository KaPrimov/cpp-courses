#ifndef COMPANY_H_
#define COMPANY_H_

#include <string>
#include <vector>
#include <sstream>

#include "HasInfo.h"
#include "HasId.h"

class Company : public HasId, public HasInfo {
private:
	int id;
	std::string name;
	std::vector<std::pair<char, char> > employees;
public:
	Company();

	Company(int id, std::string name, std::vector<std::pair<char, char> > employees);

	virtual int getId() const override;

	std::string getName() const;

	std::vector<std::pair<char, char> > getEmployees() const;

	virtual std::string getInfo() const override;

	friend std::ostream& operator<<(std::ostream& stream, const Company& c);

	friend std::istream& operator>>(std::istream& stream, Company& c);

};



#endif /* COMPANY_H_ */
