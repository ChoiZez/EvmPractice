int * arrayShift(const unsigned &N, const int &shift, int*a){
	int cur,buff;
	for (int _ = 0; _ < (N+shift)%N; _++){
		cur = a[0];
		for (int i = 0; i < N; i++){
			buff = a[(i+1)%N];
			a[(i+1)%N]= cur;
			cur = buff;
		}
	}
	return a;
}

