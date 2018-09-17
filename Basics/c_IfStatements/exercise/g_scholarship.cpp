#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double income, grades, minimalWage;

	cin >> income >> grades >> minimalWage;

	double socialScholarship = 0.0;
	double scholarship = 0.0;

	if (income < minimalWage && grades > 4.5) {
		socialScholarship = minimalWage * 0.35;
	}

	if (grades >= 5.5) {
		scholarship = grades * 25;
	}
	
	if (scholarship == 0 && socialScholarship == 0) {
		cout << "You cannot get a scholarship!" << endl;
	} else if (socialScholarship > scholarship) {
		cout << "You get a Social scholarship " << floor(socialScholarship) << " BGN";
	} else {
		cout << "You get a scholarship for excellent results " << floor(scholarship) << " BGN";
	}

	return 0;
}
