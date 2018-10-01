#include <iostream>

using namespace std;

int main() {
	
	double x, y, xMin, xMax, yMin, yMax;

	cin >> xMin >> yMin >> xMax >> yMax >> x >> y;

	if (x >= xMin && x <= xMax && y >= yMin && y <= yMax) {
		cout << "Inside" << endl;
	} else {
		cout << "Outside" << endl;
	}

	return 0;
}
