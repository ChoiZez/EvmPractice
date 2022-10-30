#include <iostream>

int* Fill(int r, int c){
	int a[r][c];
	int cur = 1;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++,cur++){
			a[i][j] = cur;
		}
	}
	return a;
}

int* ReversedFill(int r, int c, int*a){

}

int main() {
	int r,c;
	std::cin >> r >> c;

	auto a = Fill(r,c);

	std::cout << 1;
	return 0;
}
