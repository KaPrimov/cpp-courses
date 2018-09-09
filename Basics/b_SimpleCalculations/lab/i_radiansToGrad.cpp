#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double radians;

    cin >> radians;

    double degrees = radians * (180.0 / 3.1415826535);

    cout << round(degrees);

    return 0;
}
