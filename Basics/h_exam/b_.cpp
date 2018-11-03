#include <iostream>

using namespace std;

int main() {
	const double LOVE_LETTER_PRICE = 0.6;
	const double WAX_ROSE_PRICE = 7.2;
	const double KEYCHAIN_PRICE = 3.6;
	const double DRAWING_PRICE = 18.2;
	const double LUCKY_CHARM_PRICE = 22;

	double partyPrice, loveLettersCount, waxRoseCount, keychainCount, drawingsCount, luckyCharmsCount;

	cin >> partyPrice >> loveLettersCount >> waxRoseCount >> keychainCount >> drawingsCount >> luckyCharmsCount;

	double totalPrice = loveLettersCount * LOVE_LETTER_PRICE + waxRoseCount * WAX_ROSE_PRICE + keychainCount * KEYCHAIN_PRICE + drawingsCount * DRAWING_PRICE + luckyCharmsCount * LUCKY_CHARM_PRICE;
	double discount = 0;
	if (loveLettersCount + waxRoseCount + keychainCount + drawingsCount + luckyCharmsCount >= 25) {
		totalPrice = 0.65 * totalPrice;
	}

	double hostingPrice = totalPrice * 0.1;
	double winnings = totalPrice - hostingPrice;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (winnings >= partyPrice) {
		cout << "Yes! " << winnings - partyPrice << " lv left." << endl;
	} else {
		cout << "Not enough money! " << partyPrice - winnings << " lv needed." << endl;
	}


	return 0;
}
