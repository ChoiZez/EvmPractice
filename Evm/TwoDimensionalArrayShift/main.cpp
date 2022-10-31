#include <iostream>
#include <ctime>
#include "ArrayShift.h"
#include "CreateArray.h"

void TwoDimensionalArrayShift(unsigned &rows, unsigned &cols, int &shift, int** arr){
	for (int row = 0; row < rows; row++){
		ArrayShift(cols,shift,arr[row]);
	}
}

int main() {
	srand(time(nullptr));
	unsigned rows,cols;
	signed shift;
	std::cin >> rows >> cols >> shift;
	int** arr = createRandomArray(rows,cols);
	std::cout << "Array : \n";
	printArray(arr,rows,cols);
	TwoDimensionalArrayShift(rows, cols, shift, arr);
	std::cout << "Changed array: \n";
	printArray(arr,rows,cols);
	clearArray(arr,rows);
	return 0;
}
