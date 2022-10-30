#include <iostream>
#include <string>

int main(){
	int mode;
	std::cout << "Please select mode from 1 to 5\n";
	std::cin >> mode;
	std::cout << "Please enter the number of rows\n";
	int n;
	std::cin >> n;
	switch (mode) {
		case 1:
			for (int i = 0; i < n; i++) {
				std::cout << std::string(i+1,'*') << '\n';
			}
			break;
		case 2:
			for (int i = n; i > 0; i--) {
				std::cout << std::string(i,'*') << '\n';
			}
			break;
		case 3:
			for (int i = 0; i < n; i++) {
				std::cout << std::string(n-i,' ')+std::string(i+1,'*') << '\n';
			}
			break;
		case 4:
			for (int i = n; i > 0; i--) {
				std::cout << std::string(n-i,' ') + std::string(i,'*') << '\n';
			}
			break;
		case 5:
			for (int i=0;i<2*n-1;i++){
				std::cout << std::string(abs(n-i-1)%n,' ') + std::string((2*i+1)-(i>=n ? 2*((2*i+1)%(2*n-1)): 0), '*') << '\n';
			}
			break;
	}
	return 0;
}
