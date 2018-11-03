#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	getline(cin, input);
	int guestCount = 0, totalGuestCount = 0;
	int singerPrice = stoi(input);
	double collectedSum = 0;
	while(true) {
		getline(cin, input);
		if (input == "The restaurant is full") {
			break;
		}
		guestCount = stoi(input);
		totalGuestCount += guestCount;
		if (guestCount < 5) {
			collectedSum += (guestCount * 100);
		} else {
			collectedSum += (guestCount * 70);
		}
	}

	cout << "You have " << totalGuestCount << " guests and ";
	if (singerPrice <= collectedSum) {
		cout << collectedSum - singerPrice << " leva left.";
	} else {
		cout << collectedSum << " leva income, but no singer.";
	}
	
	return 0;
}
