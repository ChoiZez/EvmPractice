#include <iostream>
#include <iomanip>

int main() {
	long double eps = 1e-10;
	unsigned long long n=0;
	double sum = 0;
	double prevsum = -10000000;
	while (std::abs(sum - prevsum)>eps){
		prevsum=sum;
		sum+=(n%2==1) ? (-1/(double)(2*n+1)):(1/(double)(2*n+1));
		n++;
		if (n%1000000000==0) {std::cout << n << ' ' << std::abs(sum-prevsum) << '\n';}
	}
	std::cout << '\n';
	std:: cout << std::setprecision(16) << n << ' ' << sum*4; // 5000002363 3.141592653788201
	return 0;
}
