#include <iostream>

using namespace std;

int main() {

    int points;

    cin >> points;
    double endPoints = points;
    if (points <= 100) {
        endPoints += 5;
    } else if (points <= 1000) {
        endPoints *= 1.2;
    } else {
        endPoints *= 1.1;
    }

    if (points % 2 == 0) {
        endPoints += 1;
    } else if (points % 10 == 5) {
        endPoints += 2;
    }

    cout << endPoints - points << endl;
    cout << endPoints << endl;

    return 0;
}
