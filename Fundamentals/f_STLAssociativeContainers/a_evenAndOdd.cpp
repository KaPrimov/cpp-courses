#include <iostream>
#include <map>
#include <utility>

int main() {
	int n;
	std::cin >> n;
	std::map<int, std::string> values;

	for(int i = 0; i < n; i++) {
		std::string value = (i % 2 == 0 ? "EVEN" : "ODD");
		values[i] = value;
	}

	for (std::pair<int, std::string> pair : values) {
		std::cout << "KEY: " << pair.first << " VALUE: " << pair.second << std::endl; 
	}

	return 0;
}
