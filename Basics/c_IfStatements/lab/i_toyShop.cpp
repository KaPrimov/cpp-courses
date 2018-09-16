#include <iostream>

using namespace std;

int main() {
	
	const double PUZZLE_PRICE = 2.6;
	const double DOLL_PRICE = 3.0;
	const double TEDDYBEAR_PRICE = 4.1;
	const double MINION_PRICE = 8.2;
	const double TRUCK_PRICE = 2.0;
	
	double tripPrice, countPuzzles, countDolls, countTeddybears, countMinions, countTrucks;

	cin >> tripPrice >> countPuzzles >> countDolls >> countTeddybears >> countMinions >> countTrucks;

	double totalWinnings = countPuzzles * PUZZLE_PRICE + countDolls * DOLL_PRICE + countTeddybears * TEDDYBEAR_PRICE + countMinions * MINION_PRICE + countTrucks * TRUCK_PRICE;

	if (countDolls + countTrucks + countTeddybears + countMinions + countPuzzles >= 50) {
	double discount = totalWinnings / 4;
	totalWinnings -= discount;
	}

	double rent = totalWinnings / 10;
	totalWinnings -= rent;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (totalWinnings >= tripPrice) {
		cout << "Yes! " << totalWinnings - tripPrice
		<< " lv left.";
	} else {
		cout << "Not enough money! " << tripPrice - totalWinnings << " lv needed.";
	}

	return 0;
}
