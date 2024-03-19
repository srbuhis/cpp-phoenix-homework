#include <iostream>

class Mlass {
private:
	size_t size;
	int *ptr;
	
public:
	Mlass(size_t s) : size(s), ptr(new int[s]) {}
	
	~Mlass() {
	    delete[] ptr;

        }

	void deepCopy() {
	    int *arr1 = new int[size];
		for(size_t i = 0; i < size; ++i) {
	        arr1[i] = ptr[i];
	        }
	    display(arr1);
		delete[] arr1;
	}
	
	int *getPtr() const {
	    return ptr;
	}

	void display(int *arr1) {
	    for(size_t i = 0; i < size; ++i) {
		std::cout << arr1[i] << std::endl;
	    }
	}
};

int main() {

	size_t size;
	std::cin >> size;

	Mlass obj(size);

	for(size_t i = 0; i < size; ++i) {
	    std::cin >> obj.getPtr()[i];
	}

	std::cout << std::endl;

	obj.deepCopy();
	
}


