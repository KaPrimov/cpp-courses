#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int examHour, examMinutes, arriveHour, arriveMinutes;

	cin >> examHour >> examMinutes >> arriveHour >> arriveMinutes;

	int totalMinutesExam = examHour * 60 + examMinutes;
	int totalMinutesArrive = arriveHour * 60 + arriveMinutes;

	if (totalMinutesExam - totalMinutesArrive > 30) {
		cout << "Early" << endl;
		int minutesEarly = totalMinutesExam - totalMinutesArrive;
		if (minutesEarly < 60) {
			cout << minutesEarly << " minutes before the start";
		} else {
			cout << minutesEarly / 60 << ":" << setw(2) << setfill('0') << minutesEarly % 60 << " hours before the start";
		}
	} else if (totalMinutesArrive > totalMinutesExam) {
		int minutesLate = totalMinutesArrive - totalMinutesExam; 
		cout << "Late" << endl;
		if (minutesLate < 60) {
			cout << minutesLate << " minutes after the start";
		} else {
			cout << minutesLate / 60 << ":" << setw(2) << setfill('0') << minutesLate % 60 << " hours after the start";
		}
	} else {
		cout << "On time" << endl;
		if (totalMinutesArrive != totalMinutesExam) {
			cout << totalMinutesExam - totalMinutesArrive << " minutes before the start";
		}
	}

	return 0;
}
