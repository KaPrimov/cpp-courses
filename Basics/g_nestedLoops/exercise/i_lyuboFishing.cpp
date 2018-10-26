#include <iostream>
#include <string>
using namespace std;

int main() {
	int quota, caughtFishes = 0, lettersSum;
	string input;
	double winnings = 0.0, paid = 0.0, kilos;
	getline(cin, input);
	quota = stoi(input);
	while(true) {
		getline(cin, input);
		if (input == "Stop") {
			break;
		}
		caughtFishes++;
		for(int i = 0; i < input.length(); i++) {
			lettersSum+=input[i];
		}
		getline(cin, input);
		kilos = stod(input);
		if (caughtFishes % 3 == 0) {
			winnings += (lettersSum / kilos);
		} else {
			paid += (lettersSum / kilos);
		}
		lettersSum = 0;
		if (caughtFishes == quota) {
			cout << "Lyubo fulfilled the quota!" << endl;
			break;
		}
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	if (winnings >= paid) {
		cout << "Lyubo's profit from " << caughtFishes << " fishes is " << (winnings - paid) << " leva." << endl;
	} else {
		cout << "Lyubo lost " << (paid - winnings) << " leva today." << endl;
	}
	return 0;
}
