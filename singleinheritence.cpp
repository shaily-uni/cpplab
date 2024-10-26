#include <iostream>
using namespace std;
class base {
public:
    int x;
    int y;
    int product = 0;
    base() : x(0), y(0) {}
};
class inherited : public base {
public:
    inherited(int x, int y) {
        this->x = x;
        this->y = y;
        product = x * y;
    }
    void display() {
        cout << "Product: " << product << endl;
    }
};
int main() {
    inherited p1(4, 5);
    p1.display();
    return 0;
}
