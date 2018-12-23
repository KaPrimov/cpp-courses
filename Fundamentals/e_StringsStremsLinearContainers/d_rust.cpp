#include <iostream>
#include <vector>

bool isInside(int row, int col, int maxRow, int maxCol);

int main() {
	std::vector<std::vector<char>> matrix;
	std::vector<char> inputRow;
	const int MATRIX_ROWS = 10;
	const int MATRIX_COLS = 10;
	for (int row = 0; row < MATRIX_ROWS; row++) {
		inputRow.clear();
		for (int col = 0; col < MATRIX_COLS; col++) {
			char element;
			std::cin >> element;
			inputRow.push_back(element);
		}
		matrix.push_back(inputRow);
	}
	int times;
	std::cin >> times;
	
	for (int iteration = 0; iteration < times; iteration++) {
		for (int row = 0; row < MATRIX_ROWS; row++) {
			for (int col = 0; col < MATRIX_COLS; col++) {
				if (matrix[row][col] == '!') {
					for (int rustRow = row - 1; rustRow <= row + 1; rustRow++) {
						for (int rustCol = col - 1; rustCol <= col + 1; rustCol++ ) {
							if (!isInside(rustRow, rustCol, 10, 10) || (rustCol != col && rustRow != row)) {
								continue;
							}
							if (matrix[rustRow][rustCol] != '#') {
								matrix[rustRow][rustCol] = '@';
							}
						}
					}
				}
			}
		}
		for (int row = 0; row < MATRIX_ROWS; row++) {
			for (int col = 0; col < MATRIX_COLS; col++) {
				if (matrix[row][col] == '@') {
					matrix[row][col] = '!';
				}
			}
		}
	}

	for (int row = 0; row < MATRIX_ROWS; row++) {
		for (int col = 0; col < MATRIX_COLS; col++) {
			std::cout << matrix[row][col];
		}
		std::cout << std::endl;
	}
	
	return 0;
}

bool isInside(int row, int col, int maxRow, int maxCol) {
	return row >= 0 && row < maxRow && col >= 0 && col < maxCol;
}



