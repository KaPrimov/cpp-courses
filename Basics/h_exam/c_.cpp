#include <iostream>

using namespace std;

int main() {
	string contractLength, contractType, addedDesert;
	int months;

	cin >> contractLength >> contractType >> addedDesert >> months;
	double price = 0;
	if (contractLength == "one") {
		if (contractType == "Small") {
			price = 9.98;
		} else if (contractType == "Middle") {
			price = 18.99;
		} else if (contractType == "Large") {
			price = 25.98;
		} else {
			price = 35.99;
		}
	} else if (contractLength == "two") {
		if (contractType == "Small") {
			price = 8.58;
		} else if (contractType == "Middle") {
			price = 17.09;
		} else if (contractType == "Large") {
			price = 23.59;
		} else {
			price = 31.79;
		}
	}

	if (addedDesert == "yes") {
		if (price <= 10) {
			price += 5.5;
		} else if (price <= 30) {
			price += 4.35;
		} else {
			price += 3.85;
		}
	}
	if (contractLength == "two") {
		price -= (price * 0.0375);
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << (price * months) << " lv." << endl;
	return 0;
}
