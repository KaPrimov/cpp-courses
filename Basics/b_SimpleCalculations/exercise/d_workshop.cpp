#include <iostream>

using namespace std;

int main() {
    
    int count;
    double length, width;

    cin >> count >> length >> width;

    double totalAreaNormal = count * (length + 2 * 0.30) * (width + 2 * 0.30);
    double checkeredArea = count * (length / 2) * (length / 2);
    double priceDollars = totalAreaNormal * 7 + checkeredArea * 9;
    double priceLeva = priceDollars * 1.85;
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << priceDollars << " USD" << endl << priceLeva << " BGN" << endl;

    return 0;
}
