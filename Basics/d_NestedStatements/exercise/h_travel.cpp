#include <iostream>

using namespace std;

int main() {
	double budget;
	string season;
	
	cin >> budget >> season;
	double initialBudget = budget;
	string placeToSleep = "Hotel";
	string destination = "Europe";
	if (season == "winter") {
		if (budget <= 100) {
			destination = "Bulgaria";
			budget *= 0.3;
		} else if (budget <= 1000) {
			destination = "Balkans";
			budget *= 0.2;
		} else {
			budget *= 0.1;
		}
	} else {
		placeToSleep = "Camp";
		if (budget <= 100) {
			destination = "Bulgaria";
			budget *= 0.7;
		} else if (budget <= 1000) {
			destination = "Balkans";
			budget *= 0.6;
		} else {
			placeToSleep = "Hotel";
			budget *= 0.1;
		}
	}

	cout << "Somewhere in " << destination << endl;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << placeToSleep << " - " << initialBudget - budget;

	return 0;
}
