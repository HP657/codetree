#include <iostream>
using namespace std;

int aa(int n, int m) {
    int nn = n;
    for (int i = 1; i < m; i++)
    {
        n *= nn;
    }
    return n;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << aa(n, m);
    return 0;
}