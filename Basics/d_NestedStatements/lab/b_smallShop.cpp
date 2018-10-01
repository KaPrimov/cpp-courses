#include <iostream>

using namespace std;

int main() {

	string product, town;
	double qty;
	double price;
	cin >> product >> town >> qty;
	
	if (town == "Sofia") {
		if (product == "coffee") {
			price = 0.5 * qty;
		} else if (product == "water") {
			price = qty * 0.8;
		} else if (product == "beer") {
			price = qty * 1.2;
		} else if (product == "sweets") {
			price = qty * 1.45;
		} else if (product == "peanuts") {
			price = qty * 1.6;
		}
	} else if (town == "Plovdiv") {
		if (product == "coffee") {
			price = 0.4 * qty;
		} else if (product == "water") {
			price = qty * 0.7;
		} else if (product == "beer") {
			price = qty * 1.15;
		} else if (product == "sweets") {
			price = qty * 1.3;
		} else if (product == "peanuts") {
			price = qty * 1.5;
		}
	} else if (town == "Varna") {
		if (product == "coffee") {
			price = 0.45 * qty;
		} else if (product == "water") {
			price = qty * 0.7;
		} else if (product == "beer") {
			price = qty * 1.10;
		} else if (product == "sweets") {
			price = qty * 1.35;
		} else if (product == "peanuts") {
			price = qty * 1.55;
		}
	}
	cout << price << endl;
	return 0;
}
