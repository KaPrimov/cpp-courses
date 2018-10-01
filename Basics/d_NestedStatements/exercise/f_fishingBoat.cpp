#include <iostream>

using namespace std;

int main() {
	double budget;
	int fishermen;
	string season;

	cin >> budget >> season >> fishermen;

	double rent = 0;

	if (season == "Spring") {
		rent = 3000;
	} else if (season == "Winter") {
		rent = 2600;
	} else {
		rent = 4200;
	}

	double discount = 0;

	if (fishermen <= 6) {
		discount = 0.1;
	} else if (fishermen <= 11) {
		discount = 0.15;
	} else {
		discount = 0.25;
	}
	rent *= (1 - discount);
	if (fishermen % 2 == 0 && season != "Autumn") {
		rent *= 0.95;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	if (rent > budget) {
		cout << "Not enough money! You need " << rent - budget << " leva.";
	} else {
		cout << "Yes! You have " << budget - rent << " leva left.";
	}

	return 0;
}
