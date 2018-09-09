#include <iostream>

using namespace std;

int main() {
    
    double side, height;
    
    cin >> side >> height;
    cout.setf(ios::fixed);
    cout.precision(2);
    double area = side * height / 2;
    cout << "Triangle area = " << area;
    return 0;
}
