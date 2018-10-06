#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
	int minNumber = INT16_MAX;
	int maxNumber = INT16_MIN;
	string input;
	cin >> input;
	while (input != "END") {
		int numberInput = std::stoi(input);

		if (numberInput < minNumber) {
			minNumber = numberInput;
		}

		if (numberInput > maxNumber) {
			maxNumber = numberInput;
		}
		cin >> input;
	}

	cout << "Max number: " << maxNumber << endl;
	cout << "Min number: " << minNumber << endl;

	return 0; 
}
