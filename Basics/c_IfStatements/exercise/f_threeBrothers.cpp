#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double firstBrother, secondBrother, thirdBrother, father;

	cin >> firstBrother >> secondBrother >> thirdBrother >> father;

	double totalTime = 1 / (1/firstBrother + 1/secondBrother + 1/thirdBrother);
	double timeWithBreak = totalTime + (totalTime * 0.15);
	double timeLeft = father - timeWithBreak;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Cleaning time: " << timeWithBreak << endl;
	cout.precision(0);

	if (timeLeft > 0) {
		cout << "Yes, there is a surprise - time left -> " << floor(timeLeft) << " hours." << endl;
	} else {
		cout << "No, there isn't a surprise - shortage of time -> " << ceil(abs(timeLeft)) << " hours." << endl;
	}

	return 0;
}
