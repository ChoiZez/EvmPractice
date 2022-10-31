#include <iostream>
#include <ctime>
#include "ArrayShift.h"
#include "CreateArray.h"

void twoDimensionalArrayShift(const unsigned &rows, const unsigned &cols, const int &shift, int** arr){
	for (unsigned row = 0; row < rows; row++){
		arrayShift(cols,shift,arr[row]);
	}
}

int main() {
	srand(time(nullptr));

	unsigned rows, cols;
	signed shift;

	std::cin >> rows >> cols >> shift;

	int** arr = createRandomArray(rows, cols);

	std::cout << "Array : \n";
	printArray(arr, rows, cols);

	twoDimensionalArrayShift(rows, cols, shift, arr);

	std::cout << "Changed array: \n";
	printArray(arr,rows,cols);

	clearArray(arr,rows);

	return 0;
}
