#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int times = 1;
	int currentNum = 1;
	while (currentNum <= n) {
		for(int i = 0; i < times; i++) {
			cout << currentNum << " ";
			currentNum++;
			if (currentNum > n) {
				return 0;
			}
		}
		cout << endl;
		times++;
	}

	return 0;
}
