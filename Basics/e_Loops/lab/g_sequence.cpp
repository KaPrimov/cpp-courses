#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int num = 1;
	while(num <= n) {
		cout << num << endl;
	num = num * 2 + 1;
	}

	return 0;
}
