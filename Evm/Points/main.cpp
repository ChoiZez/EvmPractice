#include <iostream>
#include <ctime>
#include <iomanip>

double drand(){
	return (rand()%2==0) ? -(rand()/(double)RAND_MAX):(rand()/(double)RAND_MAX);
}

int main() {
	srand(time(nullptr));
	int R = 4;
	long long Points = 5000002363; // 5000002363 3.141592653788201
	long long PointsInCircle = 0;
	for (long long i=0;i<Points;i++){
		double x = drand()*R;
		double y = drand()*R;
		if (x*x+y*y<=R*R) PointsInCircle++;
		if (i%100000000==0) std::cout << i << '\n';
	}
	std::cout <<std::setprecision(16) << (double)PointsInCircle*4/(double)Points;
	return 0;
}
