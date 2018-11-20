#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int size, smallestDifference = INT16_MAX;
	cin >> size;

	int arr[size] = {};

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if (i == j) continue;
			int difference = abs(arr[i] - arr[j]);
			if (difference < smallestDifference) {
				smallestDifference = difference;
			}
		}
	}

	cout << smallestDifference;

	return 0;
}
