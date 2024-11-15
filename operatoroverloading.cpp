#include <iostream>
using namespace std;
class MyClass {
private:
    int a;
public:
    MyClass(int val) : a(val) {}
    MyClass operator++() {
        a += 5;
        return *this;
    }
    MyClass operator--() {
        a -= 1;
        return *this;
    }
    MyClass operator-() {
        a = -a;
        return *this;
    }
    friend MyClass operator++(MyClass &obj, int);
    friend MyClass operator--(MyClass &obj, int);
    friend MyClass operator-(MyClass &obj);
    void display() {
        cout << "Value of a: " << a << endl;
    }
};
MyClass operator++(MyClass &obj, int) {
    MyClass temp = obj;
    obj.a += 5;
    return temp;
}

// Overloading decrement operator (friend function)
MyClass operator--(MyClass &obj, int) {
    MyClass temp = obj;
    obj.a -= 1;
    return temp;
}
MyClass operator-(MyClass &obj) {
    obj.a = -obj.a;
    return obj;
}
int main() {
    MyClass obj(10);
    obj.display();
    obj++;
    obj.display();  
    obj--;
    obj.display(); 
    -obj;
    obj.display();  
    ++obj;
    obj.display();  
    return 0;
}
