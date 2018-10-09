#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int daysSpending = 0;
	double vacationPrice, savings, currentAmount;
	string action;
	int days = 0;
	cin >> vacationPrice >> savings;
	
	while (true) {
		days++;
		cin >> action >> currentAmount;
		if (action == "spend") {
			daysSpending++;
			savings = max(savings - currentAmount, 0.0);
		} else {
			savings += currentAmount;
			daysSpending = 0;
		}
		if (savings >= vacationPrice) {
			cout << "You saved the money for " << days << " days." << endl;
			return 0;
		} else if (daysSpending == 5) {
			cout << "You can't save the money." << endl;
			cout << days << endl;
			return 0;
		}
	}
	return 0;
}
