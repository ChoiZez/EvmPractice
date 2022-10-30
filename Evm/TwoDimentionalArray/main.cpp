#include <iostream>
#include <iomanip>
#include <ctime>

int *fillArray(int &r, int &c, int *a){
	for (int i = 0; i< c*r; i++){
		a[i] = rand();
	}
	return a;
}

void printArray(int &r, int &c,const int *a){
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c;j++){
			std::cout << std::setw(6) << std::left << a[i*c+j];
		}
		std::cout << '\n';
	}
}

int main() {
	std::srand(time(nullptr));
	int c,r;
	std::cin >> r >> c;
	int a[r][c];
	fillArray(r,c,a[0]);
	printArray(r, c, a[0]);
	return 0;
}
