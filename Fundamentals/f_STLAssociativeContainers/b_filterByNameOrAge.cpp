#include <iostream>
#include <map>
#include <string>

int main() {

	int age;
	std::string name, input;
	std::getline(std::cin, input);
	int n = std::stoi(input);
	std::map<std::string, int> people;
	
	for (int i = 0; i < n; i++) {
		std::getline(std::cin, name);
		std::getline(std::cin, input);
		age = std::stoi(input);
		if (people.find(name) == people.end()) {
			people[name] = age;
		}
	}

	std::string typeOfSorting;
	std::getline(std::cin, typeOfSorting);
	std::getline(std::cin, input);
	if (typeOfSorting == "name") {
		std::cout << "name : " << input << " age : " << people[input] << std::endl;
	} else {
		age = std::stoi(input);
		for (std::pair<std::string, int> person : people) {
			if (person.second == age) {
				std::cout << "name : " << person.first << " age : " << person.second << std::endl;
			}
		}
	}

	return 0;
}
