#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string town;
	double sales;

	cin >> town >> sales;

	transform(town.begin(), town.end(), town.begin(), ::tolower);

	double comission = 0;
	if (sales > 0) {
		if (town == "sofia") {
			if (0 <= sales && sales <= 500) comission = 0.05;
			else if (500 < sales && sales <= 1000) comission = 0.07;
			else if (1000 < sales && sales <= 10000) comission = 0.08;
			else if (sales > 10000) comission = 0.12;
		} else if (town == "plovdiv") {
			if (0 <= 500 && sales <= 500) comission = 0.055;
			else if (500 < sales && sales <= 1000) comission = 0.08;
			else if (1000 < sales && sales <= 10000) comission = 0.12;
			else if (sales > 10000) comission = 0.145;
		} else if (town == "varna") {
			if (0 <= 500 && sales <= 500) comission = 0.045;
			else if (500 < sales && sales <= 1000) comission = 0.075;
			else if (1000 < sales && sales <= 10000) comission = 0.1;
			else if (sales > 10000) comission = 0.13;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (comission == 0) {
		cout << "error" << endl;
	} else {
		cout << (sales * comission) << endl;
	}
}
