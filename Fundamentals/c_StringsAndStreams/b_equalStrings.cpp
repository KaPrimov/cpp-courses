#include <iostream>
#include <string>


int main() {
	
	std::string string1, string2;
	std::cin >> string1 >> string2;
	
	std::cout << (string1 == string2 ? "Equal" : "Not Equal") << std::endl;

	return 0;
}
