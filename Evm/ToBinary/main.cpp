#include <iostream>

int main() {
	int x;
	std::cin >> x;
	int k = 1;
	while (k<x){
		k<<=1;
	}
	k>>=1;
	while (k>0){
		std::cout << ((x&k) ? 1:0);
		k>>=1;
	}
	return 0;
}
