#include <iostream>
#include <string>
using namespace std;

int main() {
	double grad;
	string time;
	const string MORNING = "Morning";
	const string AFTERNOON = "Afternoon";
	const string EVENING = "Evening";
	cin >> grad >> time;

	string outfit, shoes;

	if (grad >= 10 && grad <= 18) {
		if (time == MORNING) {
			outfit = "Sweatshirt";
			shoes = "Sneakers";
		} else if (time == AFTERNOON) {
			outfit = "Shirt";
			shoes = "Moccasins";
		} else if (time == EVENING) {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	} else if (grad > 18 && grad <= 24) {
		if (time == MORNING) {
			outfit = "Shirt";
			shoes = "Moccasins";
		} else if (time == AFTERNOON) {
			outfit = "T-Shirt";
			shoes = "Sandals";
		} else if (time == EVENING) {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	} else if (grad > 24 ) {
		if (time == MORNING) {
			outfit = "T-Shirt";
			shoes = "Sandals";
		} else if (time == AFTERNOON) {
			outfit = "Swim Suit";
			shoes = "Barefoot";
		} else if (time == EVENING) {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	}
	cout << "It's " << grad << " degrees, get your " << outfit << " and " << shoes << ".";
	return 0;
}
