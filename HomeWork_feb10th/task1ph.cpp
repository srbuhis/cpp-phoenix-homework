#include <iostream>

void swap(int *val1, int *val2) {
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

int main() {

	int val1 = 10;
	int val2 = 20;
		
	swap(&val1, &val2);

	std::cout << val1 << " " << val2;
}
