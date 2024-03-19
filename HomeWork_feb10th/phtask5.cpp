#include <iostream>

struct ListData {
private:
	size_t size;
	int *ptr;
	 		
public:
	void addElements(int val) {
	    int *newarr = new int[size + 1];
	        for(size_t i = 0; i < size; ++i) {
		newarr[i] = ptr[i];
		}
		newarr[size] = val;	
		delete[] ptr;
		ptr = newarr;
		++size;
		}
	
	void deleteElements() {
	    if(size!= 0) {
	    --size;
	    }
	}

	void display() {
	    for(size_t i = 0; i < size; ++i) {
	    std::cout << ptr[i] << " ";
	    }
	}
};

int main() {

	ListData obj;
	
	size_t size;
	std::cin >> size;

        int *arr = new int[size];	
	
	int value;
	for (int i = 0; i < size + 1; ++i) {
	    std::cin >> value;
            obj.addElements(value);
	}
	
	obj.display();
	
	std::cout << std::endl;

	obj.deleteElements();

	obj.display();

	delete[] arr;

}




