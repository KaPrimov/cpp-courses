#include <iostream>

using namespace std;

int main() {
	int bestSum = 0;
	int currentSum = 0;
	string bestName, currentName;
	cin >> currentName;
	while(currentName != "STOP") {
		for(int currentIdx = 0; currentIdx < currentName.size(); currentIdx++) {
			currentSum += currentName[currentIdx];
		}
		if (currentSum > bestSum) {
			bestName = currentName;
			bestSum = currentSum;
		}
		currentSum = 0;
		cin >> currentName;
	}

	cout << "Winner is " << bestName << " - " << bestSum << "!";

	return 0;
}
