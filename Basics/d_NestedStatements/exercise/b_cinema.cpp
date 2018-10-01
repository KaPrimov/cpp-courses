#include <iostream>

using namespace std;

int main() {
	string type;
	int rows, cols;

	cin >> type >> rows >> cols;

	double price = 0;
	if (type == "Premiere") {
		price = 12.0;
	} else if (type == "Normal") {
		price = 7.5;
	} else if (type == "Discount") {
		price = 5.0;
	}
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << rows * cols * price << " leva" << endl;
	return 0;
}
