#include <iostream>
using namespace std;

int a(int n, int m) {

    int max = (n > m) ? n : m;
    int q = max;

    while (true) {
        if (max % n == 0 && max % m == 0) {
            break;
        }
        max += max;
    }
    return max;
}

int main() {
    int n, m;
    cin >> n >> m;
    int aa = a(n, m);
    cout << aa;
    return 0;
}