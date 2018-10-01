#include <iostream>

using namespace std;

int main() {
	
	double age;
	string gender, greeting;

	cin >> age >> gender;

	if (gender == "m") {
		if (age < 16) {
			greeting = "Master";
		} else {
			greeting = "Mr.";
		}
	} else {
		if (age < 16) {
			greeting = "Miss";
		} else {
			greeting = "Ms.";
		}
	}
	cout << greeting;
	return 0;
}
