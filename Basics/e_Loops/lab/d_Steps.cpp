#include <iostream>
#include <string>
using namespace std;

int main() {
	int totalSteps = 0;
	string input = "";
	getline(cin, input);
	
	while (input != "Going home") {
		cout << input << endl;
		totalSteps += stoi(input);
		if (totalSteps >= 10000) {
			break;
		}
		getline(cin, input);
	}
	getline(cin, input);
	totalSteps += stoi(input);

	if (totalSteps >= 10000) {
		cout << "Goal reached! Good job!";
	} else {
		cout << 10000 - totalSteps << " more steps to reach goal.";
	}

	return 0;
}
