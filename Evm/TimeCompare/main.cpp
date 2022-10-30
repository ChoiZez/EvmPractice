#include <iostream>

int main() {
	int h1,m1,s1,h2,m2,s2;
	std::cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	if ( h1 < 0 || m1>59 || m1 < 0 || s1>59 || s1 < 0 || h2 < 0 || m2>59 || m2 < 0 || s2>59 || s2 < 0){
		std::cout << "Wrong input!";
		return 1;
	}
	int cnt1=h1*3600+m1*60+s1,cnt2=h2*3600+m2*60+s2;
	int diff = std::abs(cnt1-cnt2);
	std::cout << diff / 3600 << ":" << (diff%3600)/60 << ":" << diff%60;
	return 0;
}
