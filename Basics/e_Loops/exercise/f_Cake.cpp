#include <iostream>
#include <string>

using namespace std;

int main() {
	string tokens;
	int width, length;
	cin >> width >> length;
	int totalCountCakes = width * length;

	while(true) {
		string input; cin >> input;

		if (input == "STOP") {
			cout << totalCountCakes << " pieces are left." << endl;
		break;
		}
		int countPiecesTaken = stoi(input);
		totalCountCakes -= countPiecesTaken;

		if (totalCountCakes < 0) {
			cout << "No more cake left! You need " << totalCountCakes * -1 << " pieces more." << endl;
			break;
		}
		
	}
}
