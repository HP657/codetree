#include <iostream>
using namespace std;

int a(int n, int m) {

    int max = (n > m) ? n : m;
    int q = max;

    while (true) {
        if (q % n == 0 && q % m == 0) {
            break;
        }
        q += max;
    }
    return q;
}

int main() {
    int n, m;
    cin >> n >> m;
    int aa = a(n, m);
    cout << aa;
    return 0;
}