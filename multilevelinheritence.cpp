#include <iostream>
using namespace std;
class base {
public:
    int x;
    int product;
    base() : x(0), product(0) {}
};
class inherited1 : public base {
public:
    int y;

    inherited1() : y(0) {}
};
class inherited2 : public inherited1 {
public:
    inherited2(int x, int y) {
        this->x = x;
        this->y = y;
        product = x * y;
    }
    void display() {
        cout << "Product: " << product << endl;
    }
};
int main() {
    inherited2 num(5, 6);
    num.display();
    return 0;
}
