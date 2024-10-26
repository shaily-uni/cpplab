#include <iostream>
using namespace std;

class ArraySum {
private:
    int* arr;  
    int size;  
public:
    ArraySum(int arr[], int size) {
        this->size = size;
        this->arr = new int[size];  
        for (int i = 0; i < size; i++) {
            this->arr[i] = arr[i]; 
        }
    }
    ArraySum(const ArraySum& other) {
        size = other.size;
        arr = new int[size]; 
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];  
        }
    }
    int sum() {
        int total = 0;
        for (int i = 0; i < size; i++) {
            total += arr[i]; 
        }
        return total;
    }
    ~ArraySum() {
        delete[] arr;
    }
};
int main() {
    int myArray[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(myArray) / sizeof(myArray[0]);  
    ArraySum arraySum(myArray, size);  
    int total = arraySum.sum();
    cout << "The sum of the array is: " << total << endl;  
    return 0;
}
