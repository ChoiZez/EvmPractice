#include <iostream>
#include <iomanip>

unsigned** createSnakeArray(const unsigned &rows, const unsigned &cols){
	unsigned ** array = new unsigned*[cols];
	unsigned cur = 1;
	for (int i = 0; i < rows; i++){
		array[i] = new unsigned[cols];
		for (int j = 0; j < cols; j++){
			array[i][j] = cur++;
		}
	}
	return array;
}

unsigned** createInversedSnakeArray(const unsigned &rows, const unsigned &cols){
	unsigned ** array = new unsigned*[cols];
	unsigned cur = 1;
	bool isIncreasing = true;
	for (int i = 0; i < rows; i++){
		array[i] = new unsigned[cols];
		if(isIncreasing){
			for (int j = 0; j < cols; j++){
				array[i][j] = cur++;
			}
		} else {
			for (int j = cols-1; j>=0; j--){
				array[i][j] = cur++;
			}
		}
		isIncreasing = !isIncreasing;
	}
	return array;
}

void printArray(auto** array, const unsigned &rows, const unsigned &cols){
	for (unsigned row = 0; row<rows;row++){
		for (unsigned col = 0; col < cols; col ++){
			std::cout << std::setw(6) << std::left << array[row][col];

		}
		std::cout << '\n';
	}
}

void clearArray(auto** array, const unsigned &rows){
	for (unsigned row = 0; row < rows; row++){
		delete [] array[row];
	}
	delete [] array;
}

int main() {
	unsigned rows,cols;
	std::cin >> rows >> cols;

	unsigned** SnakeArray = createSnakeArray(rows,cols);
	unsigned** InversedSnakeArray = createInversedSnakeArray(rows,cols);

	std::cout << "SnakeArray : \n";
	printArray(SnakeArray,rows,cols);

	std::cout << "InversedSnakeArray : \n";
	printArray(InversedSnakeArray,rows,cols);

	clearArray(SnakeArray,rows);
	clearArray(InversedSnakeArray,rows);

	return 0;
}
