#include <iostream>
using namespace std;

int aa(int n, int arr[], int max) {
    if (max <= arr[n]) {
        max = arr[n];
    }
    if (n == 0) {
        return max;
    }

    return aa(n - 1, arr, max);
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << aa(n - 1, arr, 0);
    return 0;
}