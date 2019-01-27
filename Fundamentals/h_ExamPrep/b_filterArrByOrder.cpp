#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<char> characters);

int main() {

	vector<char> digits, smallLetters, other;
	int size;
	char currentChar;
	cout << "Enter size of array : ";
	cin >> size;

	for (int i = 0; i < size; i++) {
		cout << "array[" << i << " = ";
		cin >> currentChar;
		if (currentChar >= 48 && currentChar <= 57) {
			digits.push_back(currentChar);
		} else if (currentChar >= 97 && currentChar <= 122 ) {
			smallLetters.push_back(currentChar);
		} else {
			other.push_back(currentChar);
		}
	
	}
	printVector(digits);
	printVector(smallLetters);
	printVector(other);
	return 0;
}

void printVector(vector<char> characters) {
	vector<char>::iterator it;
	for (it = characters.begin(); it < characters.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
