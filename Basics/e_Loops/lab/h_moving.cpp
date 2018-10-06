#include <iostream>
#include <string>
using namespace std;

int main() {
	int w, h, l;
	cin >> w >> h >> l;
	int totalArea = w * h * l;
	string input;
	cin >> input;
	while(input != "Done") {
		int boxes = stoi(input);
		totalArea -= boxes;
		if (totalArea < 0) {
			cout << "No more free space! You need " << totalArea * -1 << " Cubic meters more." << endl;
			return 0;
		}
		cin >> input;
	}
	cout << totalArea << " Cubic meters left." << endl;
	return 0;
}
