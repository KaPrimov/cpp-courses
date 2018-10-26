#include <iostream>
#include <string>

using namespace std;

int main() {
	string input, presentation;
	int juryCount, presentationsCout = 0;
	getline(cin, input);
	juryCount = stod(input);
	double totalMarksSum = 0.0, currentMarksSum = 0.0;
	getline(cin, presentation);
	cout.setf(ios::fixed);
	cout.precision(2);
	while(presentation != "Finish") {
		
		for(int i = 0; i < juryCount; i++) {
			getline(cin, input);
			currentMarksSum += stod(input);
		}
		cout << presentation << " - " << (currentMarksSum / juryCount) << "." << endl;
		totalMarksSum += currentMarksSum;
		currentMarksSum = 0.0;
		getline(cin, presentation);
		presentationsCout++;
	}
	cout << "Student's final assessment is " << (totalMarksSum / (juryCount * presentationsCout)) << ".";

	return 0;
}
