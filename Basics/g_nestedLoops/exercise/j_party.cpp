#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

string isValidAndTransformToFormat(string name) {
	for (int i = 0; i < name.length(); i++) {
		if (!isalpha(name[i])) {
			return "NULL";
		}
		name[i] = tolower(name[i]);
	}
	name[0] = toupper(name[0]);
	return name;
}

int main() {
	int count = 0, validNames = 0, invalidNames = 0;
	string input, validName;
	while(true) {
		getline(cin, input);
		if(input == "Statistic") {
			break;
		}
		count++;
		validName = isValidAndTransformToFormat(input);
		if (validName != "NULL") {
			cout << validName << endl;
			validNames++;
		} else {
			cout << "Invalid name!" << endl;
			invalidNames++;
		}
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Valid names are " << (((double) validNames / count) * 100) << "% from " << count << " names." << endl;
	cout << "Invalid names are " << (((double) invalidNames / count) * 100) << "% from " << count << " names." << endl; 
	return 0;
}
