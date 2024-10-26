#include <iostream>
using namespace std;
class base {
    int n;
public:
    base(int number) : n(number) {}
    friend class fri;
};
class fri {
public:
    void prime(base& b) {
        int n = b.n;
        int cnt = 0;
        if (n <= 1) {
            cout << n << " is NOT prime" << endl;
            return;
        }
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }
        display(n, cnt);
    }
    void display(int n, int cnt) {
        if (cnt > 2)
            cout << n << " is NOT prime" << endl;
        else
            cout << n << " is prime" << endl;
    }
};
int main() {
    base b(40);
    fri f;
    f.prime(b);
    return 0;
}
