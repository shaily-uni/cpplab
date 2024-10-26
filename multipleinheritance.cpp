#include <iostream>
using namespace std;
class A {
public:
    int x;
    int sum;
    A() : x(0), sum(0) {}
};
class B {
public:
    int y;
    B() : y(0) {}
};
class C : public A, public B {
public:
    C(int x, int y) {
        this->x = x;
        this->y = y;
        sum = this->x + this->y;  
    }
    void display() {
        cout << "Sum: " << sum << endl; 
    }
};
int main() {
    C c(3, 4);  
    c.display();
    return 0;
}
