#include <iostream>
using namespace std;
template <typename T>
T sum(T a, T b) {
    return a + b;
}
template <typename T>
T sum(T a, T b, T c) {
    return a + b + c;
}
template <typename T>
T sum(T a, T b, T c, T d) {
    return a + b + c + d;
}
int main() {
    cout << sum(10, 20) << endl;
    cout << sum(10.5, 20.5) << endl;
    cout << sum(10, 20, 30) << endl;
    cout << sum(10.5, 20.5, 30.5) << endl;
    cout << sum(10, 20, 30, 40) << endl;
    return 0;
}
