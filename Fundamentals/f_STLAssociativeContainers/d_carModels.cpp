#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <string>

int main() {
	std::map<std::string, std::vector<std::pair<std::string, std::string>>> cars;

	std::string input, make, model, year;
	std::getline(std::cin, input);
	int n = std::stoi(input);
	
	for (int i = 0; i < n; i++) {
		std::getline(std::cin, input);
		auto manifacturer = cars.find(input);
		std::getline(std::cin, model);
		std::getline(std::cin, year);
		if (manifacturer != cars.end()) {
			std::vector<std::pair<std::string, std::string>> carTypes = cars[input];
			carTypes.push_back(std::pair<std::string, std::string>(model, year));
		} else {
			cars[input] = { {model, year} };
		}
	}
	std::getline(std::cin, input);
	if (cars.find(input) != cars.end()) {
		auto carsFromMake = cars[input];
		for (auto singleCar : carsFromMake) {
			std::cout << input << " " << singleCar.first << " " << singleCar.second << " " << std::endl;
		}
	} else {
		for (auto carModel : cars) {
			std::cout << carModel.first << " ";
			for (auto separateCar : carModel.second) {
				std::cout << separateCar.first << " " << separateCar.second << std::endl;
			}
		}
	}
	return 0;
}
