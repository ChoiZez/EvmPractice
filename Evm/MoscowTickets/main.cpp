#include <iostream>

int main() {
	int n;
	int cur=0;
	std::cin >> n;
	bool flag=true;
	while (n){
		(flag) ? cur+=n%10:cur-=n%10;
		flag=!flag;
		n/=10;
	}
	std::cout << ((cur==0) ? "Lucky Ticket" : "Unlucky Ticket");
	return 0;
}
