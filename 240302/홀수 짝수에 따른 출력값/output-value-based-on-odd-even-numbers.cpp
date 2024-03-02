#include <iostream>
using namespace std;

int aa(int n) {
    int sum = 0;
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    }

    return aa(n - 2) + n;
}

int main() {
    int n;
    cin >> n;
    cout << aa(n);
    return 0;
}