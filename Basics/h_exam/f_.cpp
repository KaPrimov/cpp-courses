#include <iostream>

using namespace std;

int main() {
	int countGuests, countPresents;
	string input;
	cin >> countGuests >> countPresents;
	int countA = 0, countB = 0, countV = 0, countG = 0;
	for (int i = 0; i <= countPresents; i++) {
		getline(cin, input);
		if (input == "A") {
			countA++;
		} else if (input == "B") {
			countB++;
		} else if (input == "V") {
			countV++;
		} else if (input == "G") {
			countG++;
		}
	}
	cout.precision(2);
	cout.setf(ios::fixed);

	cout << ((double) countA / countPresents * 100.0) << "%" << endl;
	cout << ((double) countB / countPresents * 100.0) << "%" << endl;
	cout << ((double) countV / countPresents * 100.0) << "%" << endl;
	cout << ((double) countG / countPresents * 100.0) << "%" << endl;
	cout << ((double) countPresents / countGuests * 100.0) << "%" << endl;
	return 0;
}
