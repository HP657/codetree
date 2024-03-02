#include <iostream>
using namespace std;

int aa(int n) {
    int aaa = 1;
    if (n == 1) {
        return aaa;
    }
    return aa(n - 1) * n;
    aaa *= n;
}

int main() {
    int n;
    cin >> n;
    cout << aa(n);
    return 0;
}