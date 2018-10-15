#include <iostream>
#include <string>

using namespace std;

int main() {
	int tabs, salary;
	cin >> tabs >> salary;
	string pageName;
	for (int i = 0; i < tabs; i++) {
		cin >> pageName;
		if (pageName == "Facebook") {
			salary -= 150;
		} else if (pageName == "Instagram") {
			salary -= 100;
		} else if (pageName == "Reddit") {
			salary -= 50;
		}

		if (salary <= 0) {
			cout << "You have lost your salary." << endl;
			return 0;
		}
	}

	cout << salary;

	return 0;
}
