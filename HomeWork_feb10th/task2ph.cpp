#include <iostream>

int sum(int *arr, int size) {
    int i = 0;
    int result = 0;
    while(i < size) {
	result += *(arr + i);
	++i;
}
	return result;

}

int main() {

	const int size = 7;
	int arr[size] = {1, 2, 3, 4, 5, 6, 7};

	std::cout << sum(arr, size);
	
}
