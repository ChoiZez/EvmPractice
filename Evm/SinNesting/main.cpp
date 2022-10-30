#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
	double prev=0;
	double sum = 0;
	double x;
	unsigned cnt;
	std::cin >> x >> cnt;
	for (int i = 0;i<cnt;i++){
		prev = x;
		x = sin(x);
		sum+=x;
	}
	std::cout << std::setprecision(16) << sum << '\n';

	return 0;
}
