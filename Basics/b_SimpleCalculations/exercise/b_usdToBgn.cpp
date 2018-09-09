#include <iostream>

using namespace std;

int main() {
    
    double usd;
    cin >> usd;
    
    double levs = usd * 1.79549;

    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << levs << " BGN";

    return 0;
}
