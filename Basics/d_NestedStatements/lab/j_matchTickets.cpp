#include <iostream>

using namespace std;

int main() {
	double budget, transport;
	string group;
	int people;
	cin >> budget >> group >> people;
	transport = 0;

	if (people > 0) {
		if (people < 5) {
			transport = 0.75;
		} else if (people < 10) {
			transport = 0.6;
		} else if (people < 25) {
			transport = 0.5;
		} else if (people < 49) {
			transport = 0.4;
		} else {
			transport = 0.25;
		}
	}
	double budgetLeftAfterTransport = budget  - (budget * transport);
	double ticketsCost = 0;
	if (group == "Normal") {
		ticketsCost = 249.99 * people;
	} else if (group == "VIP") {
		ticketsCost = 499.99 * people;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	if (ticketsCost > budgetLeftAfterTransport) {
		cout << "Not enough money! You need " << ticketsCost - budgetLeftAfterTransport <<  " leva."; 
	} else {
		cout << "Yes! You have " << budgetLeftAfterTransport - ticketsCost << " leva left.";
	}
	return 0;
}
