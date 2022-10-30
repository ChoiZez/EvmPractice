#include <iostream>
#include <cmath>

int main() {
	double r;
	std::cin >> r;
	unsigned count = 0;
	for (unsigned x = 1;x<= round(r);x++){
		for (unsigned y = 0; y<=round(r);y++){
			if(x*x+y*y<=r*r){
				count++;
			}
		}
	}
	std:: cout << 4*count+1;
	return 0;
}
