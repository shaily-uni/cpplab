#include <iostream>
using namespace std;
class A{
    void displayA(){
        cout<<"this is class A"<<endl;
    }
};
class B: public A{
public:
    void displayB(){
        cout<<"this is class B inherited from A"<<endl;
    }
};
class C: public A{
public:
    void displayC(){
        cout<<"this is class C inherited from A"<<endl;
    }
};
class D: public A{
public:
    void displayD(){
        cout<<"this is class D inherited from A"<<endl;
    }
};
class E: public B{
public:
    void displayE(){
        cout<<"this is class A inherited from class B which is inherited from A"<<endl;
    }
};
int main(){
    B b;
    C c;
    D d;
    E e;
    b.displayB();
    c.displayC();
    d.displayD();
    e.displayE();
}