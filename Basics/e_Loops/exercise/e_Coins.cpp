#include <iostream>
#include <string>

using namespace std;
static double amount = 0;
int findCoinsTypeChangeCount(double coin) {
	int count = 0;
	while (amount - coin >= 0) {
		amount -= coin;
		count++;
	}
	return count;
}

int main() {
	cin >> amount;
	int count = findCoinsTypeChangeCount(2.00) + findCoinsTypeChangeCount(1.00) + findCoinsTypeChangeCount(0.5) + findCoinsTypeChangeCount(0.2) + findCoinsTypeChangeCount(0.1) + findCoinsTypeChangeCount(0.05) + findCoinsTypeChangeCount(0.02);
	if (amount > 0) {
		count++;
	}
	cout << count;
	return 0;
}
