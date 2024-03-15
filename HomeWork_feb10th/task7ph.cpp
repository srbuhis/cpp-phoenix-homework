#include <iostream>

int foo(int *arr, size_t size) {
    int sum = 0;
	for(size_t i = 0; i < size; ++i) {
    	sum +=  arr[i];
   	}
    	return sum;	
}

void calcul(int *arr,size_t size, int(*fptr)(int*, size_t)) {
    int result = fptr(arr, size);
    std::cout << result;
}



int main() {
	
	const size_t size = 7;
	int arr[size] = {1, 2, 3, 4, 5, 6, 7};

	calcul(arr, size, &foo);

}
