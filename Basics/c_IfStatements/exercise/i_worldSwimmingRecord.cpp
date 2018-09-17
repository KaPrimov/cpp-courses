#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double worldRecord, distance, speed;
	cin >> worldRecord >> distance >> speed;

	double neededTime = distance * speed;
	double addedTime = floor(distance / 15) * 12.5;
	double totalTime = addedTime + neededTime;
	
	cout.setf(ios::fixed);
	cout.precision(2);

	if (totalTime >= worldRecord) {
		cout << "No, he failed! He was " << (totalTime - worldRecord) << " seconds slower." << endl;
	} else {
		cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
	}
	return 0;
}
