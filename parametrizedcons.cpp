#include <iostream>
using namespace std;
class swapped {
private:
    int x;  
    int y; 
public:
    swapped(int x, int y) {
        this->x = y;  
        this->y = x;
    }
    void display() {
        cout << "The swapped values are: " << x << " " << y << endl;
    }
};
int main() {
    swapped s(11, 90); 
    s.display();
    return 0;
}
