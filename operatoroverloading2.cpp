#include <iostream>
using namespace std;
class MyClass {
private:
    int a;
public:
    MyClass(int val) : a(val) {}
    MyClass operator+(const MyClass &obj) {
        return MyClass(a + obj.a);
    }
    MyClass operator-(const MyClass &obj) {
        return MyClass(a - obj.a);
    }
    void display() {
        cout << "Value: " << a << endl;
    }
    friend MyClass operator+(MyClass &obj1, MyClass &obj2);
    friend MyClass operator-(MyClass &obj1, MyClass &obj2);
};
MyClass operator+(MyClass &obj1, MyClass &obj2) {
    return MyClass(obj1.a + obj2.a);
}
MyClass operator-(MyClass &obj1, MyClass &obj2) {
    return MyClass(obj1.a - obj2.a);
}
int main() {
    MyClass obj1(10), obj2(20);
    MyClass result1 = obj1 + obj2;
    result1.display();
    MyClass result2 = obj1 - obj2;
    result2.display();
    MyClass result3 = operator+(obj1, obj2);
    result3.display();
    MyClass result4 = operator-(obj1, obj2);
    result4.display();
    return 0;
}
