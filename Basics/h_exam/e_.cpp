#include <iostream>

using namespace std;

int main() {
	int males, females, tables;
	cin >> males >> females >> tables;

	for(int i = 1; i <= males; i++) {
		for (int j = 1; j <= females; j++) {
			cout << "(" << i << " <-> " << j << ") ";
			tables--;
			if (tables == 0) {
				return 0;
			}
		}
	}

	return 0;
}
