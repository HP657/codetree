#include <iostream>
using namespace std;

void aa(int a, int b) {
    if (a >= b) {
        b += 10;
        a *= 2;
    }
    else {
        a += 10;
        b *= 2;
    }
    cout << a << ' ' << b;
}
int main() {
    int a, b;
    cin >> a >> b;
    aa(a, b);
    return 0;
}