#include <iostream>
using namespace std;

int aa(int n) {
    if (n < 2) {
        return n;
    }

    return aa(n - 1) + aa(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << aa(n);
    return 0;
}