#include <iostream>
#include <string>

using namespace std;

int main() {
    const double milimeters = 1000;
    const double centimeters = 100;
    const double miles = 0.000621371192;
    const double inches = 39.3700787;
    const double kilometeres = 0.001;
    const double feet = 3.2808399;
    const double yard = 1.0936133;

    double value;
    string fromType, toType;
    cin >> value >> fromType >> toType;

    if (fromType == "mm") {
        value *= milimeters;
    } else if (fromType == "cm") {
       value *= centimeters;
    } else if (fromType == "mi") {
       value *= miles;
    } else if (fromType == "in") {
       value *= inches;
    } else if (fromType == "km") {
       value *= kilometeres;
    } else if (fromType == "ft") {
       value *= feet;
    } else if (fromType == "yd") {
       value *= yards;
    }

    if (toType == "mm") {
        value /= milimeters;
    } else if (toType == "cm") {
       value /= centimeters;
    } else if (toType == "mi") {
       value /= miles;
    } else if (toType == "in") {
       value /= inches;
    } else if (toType == "km") {
       value /= kilometeres;
    } else if (toType == "ft") {
       value /= feet;
    } else if (toType == "yd") {
       value /= yards;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << value;

    return 0;
}
