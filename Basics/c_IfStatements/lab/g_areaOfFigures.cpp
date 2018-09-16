#include <iostream>

using namespace std;

int main() {
	string typeOfFigure;
	cin >> typeOfFigure;
	cout.setf(ios::fixed);
	cout.precision(3);
	if (typeOfFigure == "square") {
		double side;
		cin >> side;
		cout << side * side << endl;
	} else if (typeOfFigure == "rectangle") {
		double sideA, sideB;
		cin >> sideA >> sideB;
		cout << sideA * sideB;
	} else if (typeOfFigure == "circle") {
		const double pi = 3.14159265359;
		double r;
		cin >> r;
		cout << pi * r * r;
	} else if (typeOfFigure == "triangle") {
		double side, h;
		cin >> side >> h;
		cout << (side * h) / 2;
	}
	return 0;
}
