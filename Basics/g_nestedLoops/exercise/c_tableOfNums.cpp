#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;

	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			int num = row + col + 1;
			if (row + col >= n) {
				cout << (2 * n - num) << " ";
			}	else {
				cout << num << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
