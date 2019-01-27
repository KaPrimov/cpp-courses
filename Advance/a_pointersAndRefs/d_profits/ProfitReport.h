#ifndef PROFIT_REPORT_H
#define PROFIT_REPORT_H

#include "Company.h"
#include "ProfitCalculator.h"

#include <string>
#include <map>
#include <vector>
#include <sstream>
using namespace std;

string getProfitReport(const Company* firstCompany, const Company* secondCompany,
		map<int, ProfitCalculator>& calculators) {
		ostringstream report;
		for (const Company* c = firstCompany; c <= secondCompany; c++) {
			const int id = c->getId();
			ProfitCalculator currentCalc = calculators.find(id)->second;
			report << c->getName() << " = " << currentCalc.calculateProfit(*c) << endl;
		}
	return report.str(); 
}

#endif // !PROFIT_REPORT_H
