#include <iostream>

using namespace std;

int main() {
	int num;
	
	cin >> num;

	while (num < 1 || num > 100) {
		cout << "Invalid number!" << endl;
		cin >> num;
	}

	cout << "The number is: " << num << endl;

	return 0;
}
