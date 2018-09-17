#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double countSteps, countDancers, daysToLearn;
	cin >> countSteps >> countDancers >> daysToLearn;

	int stepsPerDay = ceil(((countSteps / daysToLearn) / countSteps) * 100);
	double stepsForEachDancer = stepsPerDay / countDancers;
	cout.setf(ios::fixed);
	cout.precision(2);

	if (stepsPerDay < 13) {
		cout << "Yes, they will succeed in that goal! " << stepsForEachDancer << "%." << endl;
	} else {
		cout << "No, They will not succeed in that goal! Required " << stepsForEachDancer << "% steps to be learned per day." << endl;
	}

	return 0;
}
