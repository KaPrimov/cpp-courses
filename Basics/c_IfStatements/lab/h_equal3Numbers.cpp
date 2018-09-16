#include <iostream>

using namespace std;

int main() {

	double num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	if (num1 == num2 && num2 == num3) {
		cout << "yes";
	} else {
		cout << "no";
	}

	return 0;
}
