#include <iostream>

using namespace std;

int main() {
	int p1, p2, p3, n, number;
	p1 = 0;
	p2 = 0;
	p3 = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> number;
		if (number % 2 == 0) {
			p1++;
		} 
		if (number % 3 == 0) {
			p2++;
		} 
		if (number % 4 == 0) {
			p3++;
		}
	}
	cout.precision(2);
	cout.setf(ios::fixed);

	cout << ((double) (p1 * 100) / n) << "%" << endl;
	cout << ((double) (p2 * 100) / n) << "%" << endl;
	cout << ((double) (p3 * 100) / n) << "%" << endl;

	return 0;
}
