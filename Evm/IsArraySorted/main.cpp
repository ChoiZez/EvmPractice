#include <iostream>
#include <string>

std::string IsArraySorted(const int* arr, int n){
	bool isIncreased = arr[0] <= arr[1];
	for (int i = 0; i < n-1; i++){
		if (isIncreased) {
			if (arr[i]>arr[i+1]){
				return "Array is not sorted";
			}
		}
		else {
			if (arr[i]<arr[i+1]){
				return "Array is not sorted";
			}
		}
	}
	return (isIncreased ? "Array increases" : "Array decreases");
}


int main() {
	int arr[] = {9,8,7,5};
	std::cout << IsArraySorted(arr, sizeof(arr)/ sizeof(int));
	return 0;
}
