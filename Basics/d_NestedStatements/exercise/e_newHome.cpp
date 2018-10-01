#include <iostream>

using namespace std;

int main() {
	string flowerType;
	double budget;
	int flowersCount;
	cin >> flowerType >> flowersCount >> budget;

	double priceChange = 0;

	if (flowerType == "Roses" && flowersCount > 80) {
		priceChange = 0.9;
	} else if (flowerType == "Dahlias" && flowersCount > 90) {
		priceChange = 0.85;
	} else if (flowerType == "Tulips" && flowersCount > 80) {
		priceChange = 0.85;
	} else if (flowerType == "Narcissus" && flowersCount < 120) {
		priceChange = 1.15;
	} else if (flowerType == "Gladiolus" && flowersCount < 80) {
		priceChange = 1.2;
	}
	double totalPrice = 0;
	
	if (flowerType == "Roses") {
		totalPrice = flowersCount * 5;
	} else if (flowerType == "Dahlias") {
		totalPrice = flowersCount * 3.8;
	} else if (flowerType == "Tulips") {
		totalPrice = flowersCount * 2.8;
	} else if (flowerType == "Narcissus") {
		totalPrice = flowersCount * 3;
	} else if (flowerType == "Gladiolus") {
		totalPrice = flowersCount * 2.5;
	}
	if (priceChange != 0) {
		totalPrice *= priceChange;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	if (budget >= totalPrice) {
		cout << "Hey, you have a great garden with " << flowersCount << " " << flowerType << " and " << budget - totalPrice << " leva left."; 
	} else {
		cout << "Not enough money, you need " << totalPrice - budget << " leva more.";
	}
	return 0;
}
