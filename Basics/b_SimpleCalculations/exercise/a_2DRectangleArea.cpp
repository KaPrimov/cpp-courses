#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1,y1,x2,y2;

    cin >> x1 >> y1 >> x2 >> y2;
    double width = abs(x1 - x2);
    double height = abs(y1 - y2);

    double area = width * height;
    double perimeter = 2 * (width + height);

    cout << area << endl << perimeter << endl;

    return 0;
}
