#include <iostream>

using namespace std;

int main() {
	string month;
	int stays;

	cin >> month >> stays;

	double apartmentPrice = 0;
	double studioPrice = 0;

	if (month == "May" || month == "October") {
		apartmentPrice = 65;
		studioPrice = 50;
		if (stays > 14) {
			studioPrice *= 0.7;
		} else if (stays > 7) {
			studioPrice *= 0.95;
		}
	} else if (month == "June" || month == "September") {
		apartmentPrice = 68.7;
		studioPrice = 75.2;
		if (stays > 14) {
			studioPrice *= 0.8;
		}
	} else if (month == "July" || month == "August") {
		apartmentPrice = 77;
		studioPrice = 76;
	}

	if (stays > 14) {
		apartmentPrice *= 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Apartment: " << stays * apartmentPrice << " lv." << endl;
	cout << "Studio: " << stays * studioPrice << " lv." << endl;
	return 0;
}
