#include <iostream>

int main() {

    int size;
    std::cin >> size;

    int **matr = new int*[size];
        for(int i = 0; i < size; ++i) {
        matr[i] = new int[size];
        }

	for(int i = 0; i < size; ++i) {
    	    for(int j = 0; j < size; ++j) {
    	    std::cin >> matr[i][j];
    	    }	
        }

	for(int i = 0; i < size; ++i){
            for(int j = 0; j < size; ++j){
    	    std::cout << matr[i][j] << " ";
            }	
	}

	for(int i = 0; i < size; ++i) {
    	    delete[] matr[i];
}

    	    delete[] matr;

} 
