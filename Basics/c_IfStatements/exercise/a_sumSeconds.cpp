#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int sec1, sec2, sec3;

    cin >> sec1 >> sec2 >> sec3;

    int totalSeconds = sec1 + sec2 + sec3;

    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    cout << minutes << ":" << std::setfill('0') << setw(2) << seconds << endl;

    return 0;
}
