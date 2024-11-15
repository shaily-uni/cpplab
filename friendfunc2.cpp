#include <iostream>
using namespace std;
class A {
private:
    int a_private;
protected:
    int a_protected;
public:
    A() : a_private(10), a_protected(20) {}
    friend void accessAllData(A& a, B& b, C& c);
};
class B {
private:
    int b_private;
protected:
    int b_protected;
public:
    B() : b_private(30), b_protected(40) {}
    friend void accessAllData(A& a, B& b, C& c);
};
class C {
private:
    int c_private;
protected:
    int c_protected;
public:
    C() : c_private(50), c_protected(60) {}
    friend void accessAllData(A& a, B& b, C& c);
};

void accessAllData(A& a, B& b, C& c) {
    cout << "Accessing class A: " << endl;
    cout << "Private member of A: " << a.a_private << endl;
    cout << "Protected member of A: " << a.a_protected << endl;
    cout << "Accessing class B: " << endl;
    cout << "Private member of B: " << b.b_private << endl;
    cout << "Protected member of B: " << b.b_protected << endl;
    cout << "Accessing class C: " << endl;
    cout << "Private member of C: " << c.c_private << endl;
    cout << "Protected member of C: " << c.c_protected << endl;
}
int main() {
    A a;
    B b;
    C c;
    accessAllData(a, b, c);
    return 0;
}
