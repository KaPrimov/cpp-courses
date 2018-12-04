#include <iostream>
#include <string>
#include <algorithm>


int main() {
	
	std::string input;
	getline(std::cin, input);
	std::replace(input.begin(), input.end(), ',', ' ');
	std::cout << input;
return 0;
}
