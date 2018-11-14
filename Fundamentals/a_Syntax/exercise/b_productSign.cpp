#include <iostream>

using namespace std;

int main() {

	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	bool isPositive = true;

	if (num1 < 0) {
		isPositive = !isPositive;
	}

	if (num2 < 0) {
		isPositive = !isPositive;
	}

	if (num3 < 0) {
		isPositive = !isPositive;
	}

	if (num1 == 0 || num2 == 0 || num3 == 0) isPositive = true;
	cout << (isPositive ? "+" : "-") << endl;

	return 0;
}
