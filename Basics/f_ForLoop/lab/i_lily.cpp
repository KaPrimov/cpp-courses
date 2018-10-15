#include <iostream>

using namespace std;

int main() {
	int age, toyPrice;
	double washerPrice, accumulatedMoney;

	cin >> age >> washerPrice >> toyPrice;
	accumulatedMoney = 0.0;
	for(int i = 1; i <= age; i++) {
		if (i % 2 == 0) {
			accumulatedMoney += (((i / 2) * 10) - 1);
		} else {
			accumulatedMoney += toyPrice;
		}
	}

	cout.precision(2);
	cout.setf(ios::fixed);
	if (accumulatedMoney < washerPrice) {
		cout << "No! " << washerPrice - accumulatedMoney << endl;
	} else {
		cout << "Yes! " << accumulatedMoney - washerPrice << endl;
	}

	return 0;
}
