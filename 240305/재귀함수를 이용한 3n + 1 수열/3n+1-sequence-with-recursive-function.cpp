#include <iostream>
using namespace std;

int aa(int n, int cnt) {
    if (n == 1) {
        return cnt;
    }
    cnt++;
    if (n % 2 == 0) {
        return aa(n / 2, cnt);
    }
    else {
        return aa(n * 3 + 1, cnt);
    }
}

int main() {
    int n;
    cin >> n;
    cout << aa(n, 0);
    return 0;
}