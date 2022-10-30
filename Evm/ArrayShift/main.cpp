#include <iostream>

int * ArrayShift(int N, int shift, int*a){
	int cur,buff;
	for (int _ = 0; _ < (N+(shift%N))%N; _++){
		cur = a[0];
		for (int i = 0; i < N; i++){
			buff = a[(i+1)%N];
			a[(i+1)%N]= cur;
			cur = buff;
		}
	}
	return a;
}

int main() {
	int N, shift;
	std::cin >> N >> shift;
	int a[N];
	for (int i = 0; i<N;i++){
		a[i] = rand()%100;
	}
	std::cout << "Array : ";
	for (int i : a){
		std::cout << i << ' ';
	}
	ArrayShift(N,shift,a);
	std::cout << "\nChanged array : ";
	for (int i : a){
		std::cout << i << ' ';
	}

	return 0;
}
