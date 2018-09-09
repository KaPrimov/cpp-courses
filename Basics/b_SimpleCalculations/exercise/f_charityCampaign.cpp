#include <iostream>

using namespace std;

int main() {
    
    int days, workers, cakesCont, wafflesCount, pancakesCount;

    cin >> days >> workers >> cakesCont >> wafflesCount >> pancakesCount;

    double cakeValueForADay = cakesCont * 45.00;
    double wafflesValueForADay = wafflesCount * 5.80;
    double pancakesValueForADay = pancakesCount * 3.20;

    double totalForTheCampaign = (pancakesValueForADay + wafflesValueForADay + cakeValueForADay) * days * workers;
    
    double sumAfterExpenses = totalForTheCampaign - (0.125 * totalForTheCampaign);
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << sumAfterExpenses << endl;

    return 0;
}
