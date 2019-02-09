#include <iostream>
#include <string>
#include <map>
int main () {

	int n, minTemp, maxTemp;
	std::cin >> n;
	std::map<std::string, int> citiesByMaxTemp, citiesByMinTemp;
	std::string cityName = "";
	while(true) {
		if (citiesByMaxTemp.size() == n) {
			break;
		}
		std::cin >> cityName >> minTemp >> maxTemp;
		auto foundMaxTempCity = citiesByMaxTemp.find(cityName);
		if (foundMaxTempCity != citiesByMaxTemp.end()) {
			auto foundMinTempCity = citiesByMinTemp.find(cityName);
			if (foundMaxTempCity->second < maxTemp) {
				foundMaxTempCity->second = maxTemp;
			}
			if (foundMinTempCity->second > minTemp) {
				foundMinTempCity->second = minTemp;
			}
		} else {
			citiesByMinTemp.insert(std::pair<std::string, int>(cityName, minTemp));
			citiesByMaxTemp.insert(std::pair<std::string, int>(cityName, maxTemp));
		}
	}

	for (auto i = citiesByMaxTemp.begin(); i != citiesByMaxTemp.end(); i++) {
		std::string name = i->first;
		std::cout << name << " " << citiesByMinTemp.at(name) << " " << citiesByMaxTemp.at(name) << std::endl;
	}
	return 0;
}
