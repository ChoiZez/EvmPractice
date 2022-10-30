#include <iostream>
#include <ctime>

int main() {
	srand(time(nullptr));
	const int arrLen = rand()%30+1;
	int arr[arrLen];
	std::cout << "Array : ";
	for (int i = 0 ; i < arrLen; i++){
		arr[i] = rand();
		std::cout << arr[i] << " ";
	}
	// Todo swap;
	std::cout << "\nChanged array : ";
	for (auto i : arr){
		std::cout << i << " ";
	}

	return 0;
}
