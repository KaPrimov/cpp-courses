#include <iostream>

using namespace std;

int main() {
    
    double whiskeyPrice, bearLiters, wineLiters, rakiaLiters, whiskeyLiters;
    
    cin >> whiskeyPrice >> bearLiters >> wineLiters >> rakiaLiters >> whiskeyLiters;
    
    double rakiaPrice = whiskeyPrice / 2;
    double winePrice = rakiaPrice - (rakiaPrice * 0.4);
    double beerPrice = rakiaPrice - (rakiaPrice * 0.8);
    double rakiaSum = rakiaPrice * rakiaLiters;
    double wineSum = winePrice * wineLiters;
    double beerSum = beerPrice * bearLiters;
    double whiskeySum = whiskeyPrice * whiskeyLiters;
    double totalSum = rakiaSum + wineSum + beerSum + whiskeySum;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalSum;

    return 0;
}
