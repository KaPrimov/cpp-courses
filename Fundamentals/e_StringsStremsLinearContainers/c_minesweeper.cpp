#include <iostream>
#include <vector>

bool isInside(int row, int col, int maxRow, int maxCol);

int main() {

	int inputMatrixRows, inputMatrixCols;
	std::cin >> inputMatrixRows >> inputMatrixCols;
	
	std::vector<std::vector<char>> inputMatrix;

	std::vector<char> inputRow;

	for (int row = 0; row < inputMatrixRows; row++) {
		inputRow.clear();
		for (int col = 0; col < inputMatrixCols; col++) {
			char element;
			std::cin >> element;
			inputRow.push_back(element);
		}
		inputMatrix.push_back(inputRow);
	}
	std::vector<std::vector<int>> blastMap(inputMatrixRows, std::vector<int> (inputMatrixCols, 0));
	for (int row = 0; row < inputMatrixRows; row++) {
		for (int col = 0; col < inputMatrixCols; col++) {
			if (inputMatrix[row][col] == '!') {
				for (int blastRow = row - 1; blastRow <= row + 1; blastRow++) {
					for (int blastCol = col - 1; blastCol <= col + 1; blastCol++ ) {
						if (isInside(blastRow, blastCol, inputMatrixRows, inputMatrixCols)) {
							blastMap[blastRow][blastCol]++;
						}
					}
				}
			}
		}
	}

	for (int row = 0; row < inputMatrixRows; row++) {
		for (int col = 0; col < inputMatrixCols; col++) {
			std::cout << blastMap[row][col];
		}
		std::cout << std::endl;
	}
	return 0;
}

bool isInside(int row, int col, int maxRow, int maxCol) {
	return row >= 0 && row < maxRow && col >= 0 && col < maxCol;
}
