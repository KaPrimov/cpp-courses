#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for(int i = a; i <= b; i++) {
		for(int j = a; j <= b; j++) {
			for(int k = c; k <= d; k++) {
				for(int l = c; l <= d; l++) {
					if ((i != j && k != l) && (i + l == j + k)) {
						cout << i << j << endl << k << l << endl << endl;
					}
				}
			}
		}
	}

	return 0;
}
