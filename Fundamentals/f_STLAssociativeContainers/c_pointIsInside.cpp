#include <iostream>

int main() {
	int x1, y1, x2, y2, x3, y3;

	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	bool isInside = x3 >= x1 && x3 <= x2 && y3 >= y1 && y3 <= y2;

	if (isInside) {
		std::cout << "Check point is inside";
	} else {
		std::cout << "Check point is outside";
	}

	return 0;
}
