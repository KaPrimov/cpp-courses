#include <iostream>
#include <string>

using namespace std;

int main() {
    
    double value;
    string fromCurrency, toCurrency;

    cin >> value >> fromCurrency >> toCurrency;
    double bgn = 1.0;
    double usd = 1.79549;
    double eur = 1.95583;
    double gbp = 2.53405;

    if (fromCurrency == "USD") {
        value *= usd;
    } else if (fromCurrency == "EUR") {
        value *= eur;
    } else if (fromCurrency == "GBP") {
        value *= gbp;
    }

    if (toCurrency == "BGN") {
        value /= bgn;
    } else if (toCurrency == "USD") {
        value /= usd;
    } else if (toCurrency == "EUR") {
        value /= eur;
    } else if (toCurrency == "GBP") {
        value /= gbp;
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << value;

    return 0;
}

