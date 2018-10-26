#include <iostream>

using namespace std;

int main() {
	
	int n, l;
	cin >> n >> l;

	for(int num1 = 1; num1 < n; num1++) {
		for(int num2 = 1; num2 < n; num2++) {
			for(char letter1 = 97; letter1 < 97 + l; letter1++) {
				for (char letter2 = 97; letter2 < 97 + l; letter2++) {
					for (int num3 = 2; num3 <= n; num3++) {
						if (num3 > num1 && num3 > num2) {
							cout << num1 << num2 << letter1 << letter2 << num3 << " ";
						}
					}
				}
			}
		}
	}

	return 0;
}
