#include <iostream>
using namespace std;

int aa(int n, int cnt, int arr[]) {
    if (n <= cnt) {
        return arr[n - 1];
    }
    arr[cnt] = (arr[cnt - 1] * arr[cnt - 2]) % 100;
    return aa(n, cnt + 1, arr);
}

int main() {
    int n;
    cin >> n;
    int arr[n+1] = {0};
    arr[0] = 2;
    arr[1] = 4;
    cout << aa(n, 2, arr);
    return 0;
}