#include <iostream>
#include <string>

using namespace std;

int main() {
	int glassCapacity;
	int countPressings = 0;
	cin >> glassCapacity;

	while(true) {
		string buttonPressed;
		cin >> buttonPressed;

		if (buttonPressed == "Hard") {
			glassCapacity -= 200;
		} else if (buttonPressed == "Medium") {
			glassCapacity -= 100;
		} else if (buttonPressed == "Easy") {
			glassCapacity -= 50;
		}
		countPressings++;
		if (glassCapacity == 0) {
			cout << "The dispenser has been tapped " << countPressings << " times." << endl;
			break;
		} else if(glassCapacity < 0) {
			cout << glassCapacity * -1 << "ml has been spilled." << endl;
			break;
		}
	}

}
