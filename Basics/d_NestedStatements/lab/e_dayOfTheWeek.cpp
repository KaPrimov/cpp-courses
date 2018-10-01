#include <iostream>

using namespace std;

int main() {

	int day;
	cin >> day;
	string dayOfTheWeek;

	switch(day) {
		case 1:
			dayOfTheWeek = "Monday";
			break;
		case 2:
			dayOfTheWeek = "Tuesday";
			break;
		case 3:
			dayOfTheWeek = "Wednesday";
			break;
		case 4:
			dayOfTheWeek = "Thursday";
			break;
		case 5:
			dayOfTheWeek = "Friday";
			break;
		case 6:
			dayOfTheWeek = "Saturday";
			break;
		case 7:
			dayOfTheWeek = "Sunday";
			break;
		default:
			dayOfTheWeek = "Error";
			break;
	}

	cout << dayOfTheWeek;
	return 0;
}
