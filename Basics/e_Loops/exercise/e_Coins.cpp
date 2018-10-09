#include <iostream>
#include <string>

using namespace std;
static int amount = 0;
int findCoinsTypeChangeCount(int coin) {
	int count = amount / coin;
	amount %= coin;
	return count;
}

int main() {
	double initialAmount;
	cin >> initialAmount;
	amount = initialAmount * 100;
	
	int count = findCoinsTypeChangeCount(200) + findCoinsTypeChangeCount(100) + findCoinsTypeChangeCount(50) + findCoinsTypeChangeCount(20) + findCoinsTypeChangeCount(10) + findCoinsTypeChangeCount(5) + findCoinsTypeChangeCount(2) + findCoinsTypeChangeCount(1);
	
	cout << count;
	return 0;
}
