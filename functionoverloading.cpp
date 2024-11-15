#include <iostream>
using namespace std;
class Sum {
public:
    int sum(int a, int b) {
        return a + b;
    }
    int sum(int a, int b, int c) {
        return a + b + c;
    }
    int sum(int a, int b, int c, int d) {
        return a + b + c + d;
    }
};
int main() {
    Sum s;
    int result;
    result = s.sum(10, 20);
    cout << "Sum of two numbers: " << result << endl;
    return 0;
}
