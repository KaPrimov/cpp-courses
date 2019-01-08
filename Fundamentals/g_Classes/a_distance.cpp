#include <iostream>
#include <cmath>

int main() {
	double x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;

	double x = x1 - x2;
	double y = y1 - y2;
	double dist = std::sqrt(std::pow(x, 2) + std::pow(y, 2));

	std::cout << dist << std::endl;

	return 0;
}
