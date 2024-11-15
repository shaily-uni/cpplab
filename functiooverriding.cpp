#include <iostream>
using namespace std;
class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};
class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        return a + b + c + 10;
    }
};
int main() {
    Base* basePtr;
    Base baseObj;
    Derived derivedObj;
    cout << "Sum from base class object: " << baseObj.sum(10, 20, 30) << endl;
    basePtr = &derivedObj;
    cout << "Sum from derived class object : " << basePtr->sum(10, 20, 30) << endl;
    cout << "Sum from derived class object directly: " << derivedObj.sum(10, 20, 30) << endl;
    basePtr = &baseObj;
    cout << "Sum from base class object : " << basePtr->sum(10, 20, 30) << endl;
    return 0;
}
