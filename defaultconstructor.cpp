#include <iostream>
using namespace std;
class sumnum {
private:
    int x; 
    int sum; 
public:
    sumnum() : x(10), sum(0) { 
        for (int i = 1; i <= x; i++) { 
            sum = sum + i; 
        }
    }
    void display() {
        cout << "The sum is " << sum << endl;  
    }
};
int main() {
    sumnum numbers; 
    numbers.display(); 
    return 0;
}
