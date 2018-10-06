#include <iostream>
#include <string>
using namespace std;

int main() {
	int depositsCount;

	cin >> depositsCount;
	double totalSum = 0;
	cout.setf(ios::fixed);
	cout.precision(2);
	for (int i=0; i < depositsCount; i++) {
		double moneyToDeposit = 0;
		cin >> moneyToDeposit;
		if (moneyToDeposit < 0) {
			cout << "Invalid operation!" << endl;
			break;
		}
		totalSum += moneyToDeposit;
		cout << "Increase: " << moneyToDeposit << endl;
	}
	cout << "Total: " << totalSum;

}
