#include <iostream>
#include <string>

using namespace std;

int main() {
	string input, lastTaskName;
	int poorGradesCount, currentGrade;
	getline(cin, input);
	poorGradesCount = stoi(input);
	int problemsCount = 0;
	int totalScore = 0;
	int badGradesCount = 0;

	while(true) {
		getline(cin, input);
		if (input == "Enough") {
			cout.setf(ios::fixed);
			cout.precision(2);
			cout << "Average score: " << totalScore / (double)problemsCount << endl;
			cout << "Number of problems: " << problemsCount << endl;
			cout << "Last problem: " << lastTaskName;
			return 0;
		}
		problemsCount++;
		lastTaskName = input;
		getline(cin, input);
		currentGrade = stoi(input);
		totalScore += currentGrade;
		if (currentGrade <= 4) {
			badGradesCount++;
		}
		if (badGradesCount == poorGradesCount) {
			cout << "You need a break, " << poorGradesCount << " poor grades.";
			return 0;
		}
	}

	return 0;
}
