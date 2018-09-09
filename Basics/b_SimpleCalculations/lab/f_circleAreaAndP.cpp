#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius;
    const double pi = 3.14159265359;

    cin >> radius;
    double area = pi * pow(radius, 2);
    double perimeter = 2 * pi * radius;
    
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    
    return 0;
}
