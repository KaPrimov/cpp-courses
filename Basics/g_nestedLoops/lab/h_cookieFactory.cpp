#include <iostream>

using namespace std;

int main() {
	bool hasFlour = false;
	bool hasEggs = false;
	bool hasSugar = false;

	int batches;
	int madeBatches = 0;
	cin >> batches;
	string input;
	cin >> input;
	while(true) {
		if (input == "Bake!") {
			if (hasEggs && hasFlour && hasSugar) {
				madeBatches++;
				cout << "Baking batch number " << madeBatches << "..." << endl;
				hasEggs = false;
				hasFlour = false;
				hasSugar = false;
				if (madeBatches == batches) {
					break;
				}
			} else {
				cout << "The batter should contain flour, eggs and sugar!" << endl;
			}
		} else if (input == "sugar") {
			hasSugar = true;
		} else if (input == "flour") {
			hasFlour = true;
		} else if (input == "eggs") {
			hasEggs = true;
		}
		cin >> input; 
	}

	return 0;
}
