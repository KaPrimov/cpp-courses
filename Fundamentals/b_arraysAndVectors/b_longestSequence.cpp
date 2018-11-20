#include <iostream>

using namespace std;

int main() {

	int size, biggestSize = 1, startIdx = 0, currentSize = 1, currentIdx = 0;
	cin >> size;
	double arr[size] = {};
	for(int idx = 0; idx < size; idx++) {
		cin >> arr[idx];
		if (idx > 0) {
			if (arr[idx-1] == arr[idx]) {
				if (currentSize == 1) {
					currentIdx = idx-1;
				}
				currentSize++;
				if (currentSize >= biggestSize) {
					biggestSize = currentSize;
					startIdx = currentIdx;
				}
			} else {
				currentSize = 1;
			}
		}
	}
	if (biggestSize == 1) {
		cout << arr[size - 1] << endl;
		return 0;
	}
	for (int i = startIdx; i < startIdx + biggestSize ;i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
