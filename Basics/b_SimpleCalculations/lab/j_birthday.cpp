#include <iostream>

using namespace std;

int main() {
    
    double length, width, height, percentage;

    cin >> length >> width >> height >> percentage;

    double volume = length * width * height;
    double litersCapacity = volume * 0.001;
    percentage *= 0.01;
    double litersNeeded = litersCapacity*(1 - percentage);

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << litersNeeded;

    return 0;
}
