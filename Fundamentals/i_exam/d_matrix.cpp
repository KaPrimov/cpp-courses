#include <iostream>
#include <vector>

bool isSimple(const int& number);

int main() {
	std::vector<std::vector<int>> matrix;
	int size;
	std::cin >> size;
	
	for ( int i = 0; i < size; ++i ) {
		std::vector<int>temp;
		for ( int j = 0; j < size; ++j ) {
			int number;
			std::cin >> number;
			temp.push_back(number);
		}
		matrix.push_back(temp);
	}
	int startIdx = 1;
	int endIdx = size - 1;
	std::vector<int> numsToAdd;
	for (int row = size - 1; row > size / 2; row--) {
		for (int col = startIdx; col < endIdx; col++) {
			numsToAdd.push_back(matrix[row][col]);
		}
		startIdx++;
		endIdx--;
		if (startIdx >= endIdx) {
			break;
		}
	}
	long sum = 0;
	for(size_t i = 0; i < numsToAdd.size(); i++) {
		if (isSimple(numsToAdd.at(i))) {
			sum += numsToAdd.at(i);
		}
	}

	std::cout << sum;
	return 0;
}

bool isSimple(const int& number) {
	for (int i = 2; i < number; i++) {
		if (number % 2 == 0) {
			return false;
		}
	}
	return true;
}
