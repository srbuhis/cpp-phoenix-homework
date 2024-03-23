#include <iostream>

int* map(int* arr, size_t size, int (*func)(int)) {
	int* mappedArray = new int[size];
	for(size_t i = 0; i < size; ++i) {
	mappedArray[i] = func(arr[i]);
	}
	return mappedArray;
}

int doubleValue(int value) {
	return 2*value;
}

int main() {

	int arr[] = {1, 2, 3, 4};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	int* mappedArray = map(arr, size, doubleValue);

	for(size_t i = 0; i < size; ++i) {
	std::cout << mappedArray[i] << std::endl;

}
	delete[] mappedArray;
}
