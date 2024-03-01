#include <iostream>
using namespace std;

int aa(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return aa(n - 1) + aa(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << aa(n);
    return 0;
}