#include <iostream>

int * sortByNumber(const int &count ,const int &number, int* a){
	int pos = 0;
	for (int i = 0; i < count; i++){
		if (a[i] <= number) {
			std::swap(a[i],a[pos]);
			pos++;
		}
	}
	return a;
}

int main() {
	int N,M;
	std::cin >> N >> M;
	int a[N];
	for (int i = 0; i < N; i++){
		a[i] = rand() % 43;
	}
	std::cout << "Array : ";
	for (int i : a){
		std::cout << i << ' ';
	}
	sortByNumber(N, M, a);
	std::cout << "\nChanged array : ";
	for (int i : a){
		std::cout << i << ' ';
	}
	return 0;
}
