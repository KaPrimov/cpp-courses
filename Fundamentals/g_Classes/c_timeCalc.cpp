#include <iostream>

using namespace std;

int main() {
	typedef unsigned long long TimeVariable;
	TimeVariable hours, minutes, seconds;
	cin >> hours >> minutes >> seconds;
	TimeVariable totalSeconds = hours * 3600 + minutes * 60 + seconds;
	cout << totalSeconds / 3600 << endl;
	cout << totalSeconds / 60 << endl;
	cout << totalSeconds << endl;


	return 0;
}
