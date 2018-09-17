#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int hours, minutes;

	cin >> hours >> minutes;

	int totalMinutes = hours * 60 + minutes + 15;

	int hoursAfterAddition = totalMinutes / 60;
	int minutesAfterAddition = totalMinutes % 60;

	cout << (hoursAfterAddition % 24)  << ":" << setfill('0') << setw(2) << minutesAfterAddition << endl;

	return 0;
}
