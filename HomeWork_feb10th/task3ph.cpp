#include <iostream>

void reverseArr(int *arr, int size) {

int *start = &arr[0];
int *end = &arr[size-1];

int i = 0;
while(i < size/2){
    int temp = *start;
    *start = *end;
    *end = temp;
    ++start;
    --end;
    ++i;
} 

/*for(int i = 0; i < size/2; ++i){
		
int temp = *(arr + i);
*(arr + i) = *(arr+size - 1 - i);
*(arr + size - 1 -i) = temp; 
}*/
}

int main() {
	
	const int size = 7; 
	int arr[size] = {1, 2, 3, 4, 5, 6, 7};

	reverseArr(arr, size);

	for(int i = 0; i < size; ++i) {
	std::cout << arr[i] << " ";

}

}
