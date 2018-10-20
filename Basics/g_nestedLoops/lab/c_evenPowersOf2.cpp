#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int number, result;
	cin >> number;
	result = 1;

	for(int i = 0; i <= number; i += 2) {
		cout << result << endl;
		result *= 4;
	}

	return 0;
}
