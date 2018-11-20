#include <iostream>

using namespace std;

int main() {
	int currentNum, size, biggestCount = 0, biggestNum = 0;
	int mostFrequentNums[10] = {};
	
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> currentNum;
		mostFrequentNums[currentNum]++;
	}

	for(int i = 0; i < 10; i++) {
		if (mostFrequentNums[i] > biggestCount) {
			biggestCount = mostFrequentNums[i];
		}
	}

	for(int i = 0; i < 10; i++) {
		if (mostFrequentNums[i] == biggestCount) {
			cout << i << " ";
		}
	}
}
