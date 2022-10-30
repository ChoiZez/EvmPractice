#include <iostream>
#include <string>
#include <cmath>

std::string toBinary(int n){
	int k = 1;
	std::string s = "";
	while (k<=n){
		k<<=1;
	}
	k>>=1;
	while (k>0){
		s+= ((n&k) ? "1" : "0");
		k>>=1;
	}
	return s;
}

void newToBinary(int n, int spos,int fpos){
	int k = 1 << (spos-1);
	while (k<=n && k<=(1<<fpos)){
		k<<=1;
	}
	while (k > (1<<spos)){
		std::cout << ((n&k) ? "1" : "0");
		k>>=1;
	}
}
//1010
void solve(int n , int k){
	bool positiveShift = (k>0);
	if (positiveShift){
		newToBinary(n,1,(int) ceil(log2(n))-std::abs(k));
		std::cout << '\n';
		newToBinary(n,std::abs(k),(int) ceil(log2(n)));
	}

}

int main() {
	int n,k;
	std::cin >> n >> k;
	int b = 1;
	bool positiveShift = (k>0);
	solve(n,k);
//	std::string s = toBinary(n);
//	std:: cout << s << '\n';
//	std::cout << (positiveShift ?
//	s.substr(s.size()-std::abs(k),std::abs(k))+s.substr(0,s.size()-std::abs(k)):
//	s.substr(std::abs(k),s.size()-std::abs(k))+s.substr(0,std::abs(k)));
	return 0;
}
