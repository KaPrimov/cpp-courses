#include <iostream>

using namespace std;

int main() {
	string name;
	cin >> name;
	double sum = 0;
	for (int i=1; i<=12; i++) {
		double grade;
		cin >> grade;
		if (grade < 4) {
			cout << name << " has been excluded at " << i << " grade" << endl;
			return 0;
		}
		sum += grade;
	}

	double average = sum / 12;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << name << " graduated. Average grade: " << average << endl;

	return 0;
}
