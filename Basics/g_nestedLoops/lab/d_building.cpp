#include <iostream>

using namespace std;

int main() {
	
	int floors, apartmentsPerFloor;

	cin >> floors >> apartmentsPerFloor;

	for(int floor = floors; floor >= 1; floor--) {
		for (int apartment = 0; apartment < apartmentsPerFloor; apartment++) {
			char letter = 'L';
			if (floor != floors) {
				letter = 'O';
				if (floor % 2 == 1) {
					letter = 'A';
				}
			}
			cout << letter << floor << apartment << ' ';
	}
		cout << endl;
	}

	return 0;
}
