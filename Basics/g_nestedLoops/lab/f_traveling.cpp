#include <iostream>

using namespace std;

int main() {
	string destination, input;
	double money = 0;
	double tripPrice = 0;
	while(true) {
		cin >> input;
		if (input == "End") {
			return 0;
		}
		destination = input;
		cin >> tripPrice;
		while(true) {
			cin >> input;
			if (input == "End") {
				return 0;
			}
			money+= stod(input);
			if (money >= tripPrice) {
				cout << "Going to " << destination << "!" << endl;
				money = 0;
				break;
			}
		}
		
	}
	return 0;
}
