#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string typeOfYear;
	double holidays, weekendsInHometown;
	cin >> typeOfYear >> holidays >> weekendsInHometown;
	double weekendsToPlayInSofia = (48 - weekendsInHometown) * (3.0 / 4);
	double holidaysToPlay = holidays * (2.0 / 3);

	double totalGames = weekendsToPlayInSofia + weekendsInHometown + holidaysToPlay;

	if (typeOfYear == "leap") {
		cout << floor((totalGames + (totalGames * 0.15))) << endl;
	} else {
		cout << floor(totalGames) << endl;
	}
	return 0;
}
