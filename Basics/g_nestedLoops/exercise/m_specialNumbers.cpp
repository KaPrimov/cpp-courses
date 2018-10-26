#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	for(int i = 1; i < 10; i++) {
		for(int j = 1; j < 10; j++) {
			for(int k = 1; k < 10; k++) {
				for(int l = 1; l < 10; l++) {
					if (n % i == 0 && n % j == 0 && n % k == 0 && n % l == 0) {
						cout << i << j << k << l << " ";
					}
				}
			}
		}
	}

	return 0;
}
