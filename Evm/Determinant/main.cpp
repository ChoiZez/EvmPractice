#include <iostream>
#include <vector>

using namespace std;

long long ToMinor(unsigned long long n, vector<vector<long long>> a){
	if (n == 1) return a[0][0];

	long long s = 0;
	for (int i = 0; i<n;i++){
		vector<vector<long long>> Minor(n-1);
		for (int nrow = 1; nrow < n; nrow++){
			for (int ncol = 0; ncol < n; ncol++){
				if (ncol != i) Minor[nrow-1].push_back(a[nrow][ncol]);
			}
		}
		s += a[0][i]*((i)%2==0 ? 1:-1)*ToMinor(n-1,Minor);
	}
	return s;
}

long long determinant(vector< vector<long long> > m) {
	return ToMinor(m.size(),m);
}

int main(){
	std::cout << determinant({{1,3},{5,2}});
}