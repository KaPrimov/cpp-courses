#include <iostream>
#include <string>

using namespace std;

int main() {

	string word;
	getline(cin, word);
	int sum = 0;
	for (int i = 0; i < word.length(); i++) {
		char asciiLetter = word[i];
		if (asciiLetter == 'a') {
			sum += 1;
		} else if (asciiLetter == 'e') {
			sum += 2;
		} else if (asciiLetter == 'i') {
			sum += 3;
		} else if (asciiLetter == 'o') {
			sum += 4;
		} else if (asciiLetter == 'u') {
			sum += 5;
		}
	}

	cout << sum;
}
