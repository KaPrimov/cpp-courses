#include <iostream>

using namespace std;

int main() {
	int p1, p2, p3, p4, p5, n, number;
	p1 = 0;
	p2 = 0;
	p3 = 0;
	p4 = 0;
	p5 = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> number;
		if (number < 200) {
			p1++;
		} else if (number < 400) {
			p2++;
		} else if (number < 600) {
			p3++;
		} else if (number < 800) {
			p4++;
		} else {
			p5++;
		}
	}
	cout.precision(2);
	cout.setf(ios::fixed);

	cout << ((double) (p1 * 100) / n) << "%" << endl;
	cout << ((double) (p2 * 100) / n) << "%" << endl;
	cout << ((double) (p3 * 100) / n) << "%" << endl;
	cout << ((double) (p4 * 100) / n) << "%" << endl;
	cout << ((double) (p5 * 100) / n) << "%" << endl;

	return 0;
}
