#include <iostream>
using namespace std;

void aa(int n) {
    if (n == 0) {
        return;
    }
    aa(n - 1);
    cout << n << ' ';
}

void bb(int n) {
    if (n == 0) {
        return;
    }
    cout << n << ' ';
    bb(n - 1);
}

int main() {
    int n;
    cin >> n;
    aa(n);
    cout << endl;
    bb(n);
    return 0;
}