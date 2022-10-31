#include <iostream>
#include <iomanip>

int** createRandomArray(unsigned &rows, unsigned &cols){
	int** array = new int*[rows];
	for (int i = 0; i < rows; i++){
		array[i] = new int[cols];
		for (int j = 0; j < cols; j++){
			array[i][j] = rand();
		}
	}
	return array;
}

void printArray(int** array, unsigned &rows,unsigned &cols){
	for (unsigned row = 0; row<rows;row++){
		for (unsigned col = 0; col < cols; col ++){
			std::cout << std::setw(6) << std::left << array[row][col];

		}
		std::cout << '\n';
	}
}

void clearArray(int** array, unsigned &rows){
	for (unsigned row = 0; row < rows; row++){
		delete [] array[row];
	}
	delete [] array;
}
