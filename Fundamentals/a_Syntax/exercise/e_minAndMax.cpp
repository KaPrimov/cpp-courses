#include <iostream>

using namespace std;

int main() {
	int n;
	int min = INT_MAX, max = INT_MIN, current;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> current;
		if (current < min) {
			min = current;
		} 
		if (current > max) {
			max = current;
		}
	}

	cout << min << " " << max << endl;

	return 0;
}
