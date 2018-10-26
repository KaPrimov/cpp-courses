#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isNumber(string stringToCheck) {
	return !stringToCheck.empty() && all_of(stringToCheck.begin(), stringToCheck.end(), ::isdigit);
}

int main() {
	string input;
	int moneyHaving, count = 0, price, initialMoney;
	getline(cin, input);
	moneyHaving = stoi(input);
	initialMoney = moneyHaving;
	bool isInShop = false;
	while(true) {
		getline(cin, input);
		if (input == "enough") {
			break;
		} if (input == "enter") {
			isInShop = true;
			continue;
		} else if (input == "leave") {
			isInShop = false;
			continue;
		}

		if(isInShop && isNumber(input)) {
			price = stoi(input);
			if (price > moneyHaving) {
				cout << "Not enough money." << endl;
			} else {
				moneyHaving -= price;
				count++;
				if (moneyHaving == 0) {
					break;
				}
			}
		} 
	}
	cout << "For " << count << " clothes I spent " << initialMoney - moneyHaving << " lv and have " << moneyHaving << " lv left." << endl;

	return 0;
}
