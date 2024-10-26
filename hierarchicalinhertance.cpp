#include <iostream>
using namespace std;
class base{
public:
	int num1;
	int num2;
public:
	base(int a, int b): num1(a),num2(b){}
};
class Derived1 : public Base {
public:
    Derived1(int a, int b) : Base(a, b) {}
    void displayNum1() {
        cout << "First integer: " << num1 << endl;
    }
};
class Derived2 : public Base {
public:
    Derived2(int a, int b) : Base(a, b) {}
    void displayNum2() {
        cout << "Second integer: " << num2 << endl;
    }
};
int main() {
    Derived1 obj1(5, 10);
    Derived2 obj2(5, 10); 
    obj1.displayNum1(); // Display the first integer
    obj2.displayNum2(); // Display the second integer
    return 0;
}
