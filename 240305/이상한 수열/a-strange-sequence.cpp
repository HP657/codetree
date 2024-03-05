#include <iostream>
using namespace std;

int aa(int n, int arr[]) {
    if (arr[n] != 0) {
        return arr[n];
    }
    
    arr[n] = aa(n / 3, arr) + aa(n - 1, arr);
    return arr[n];
}

int main() {
    int n;
    cin >> n;

    int arr[n + 1] = {0};
    arr[1] = 1;
    arr[2] = 2;

    cout << aa(n, arr);
    return 0;
}