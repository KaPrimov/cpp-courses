#include <iostream>

using namespace std;

int main() {
	
	int number;
	cin >> number;

	string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	if (number <= 0 || number > 9) {
		cout << "number too big" << endl;
	} else { 
		cout << numbers[number-1];
	}

	return 0;
}
