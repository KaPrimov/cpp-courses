#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double length, width, barSide;

	cin >> length >> width >> barSide;

	double roomSize = length * width;
	double barSize = barSide * barSide;
	double dancingSize = roomSize * 0.19;
	double freeSpace = roomSize - barSize - dancingSize;
	int guestCount = ceil(freeSpace / 3.2);
	cout << guestCount << endl;

	return 0;
}
