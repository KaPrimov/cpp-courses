#include <iostream>

using namespace std;

bool areEqual(int arr1[], int size1, int arr2[], int size2);
void readArr(int arr[], int size);

int main() {
	int size1, size2;
	cin >> size1;
	int arr1[size1] = {};
	readArr(arr1, size1);
	cin >> size2;
	int arr2[size2] = {};
	readArr(arr2, size2);
	if(areEqual(arr1, size1, arr2, size2)) {
		cout << "equal";
	} else {
		cout << "not equal";
	}

	return 0;
}

bool areEqual(int arr1[], int size1, int arr2[], int size2) {
	if (size1 != size2) {
		return false;
	}

	for(int idx = 0; idx < size1; idx++) {
		if (arr1[idx] != arr2[idx]) return false;
	}

	return true;
}

void readArr(int arrayToWrite[], int size) {
	for(int i = 0; i < size; i++) {
		cin >> arrayToWrite[i];
	}
}
