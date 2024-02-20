#include <iostream>
using namespace std;

void aa(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = abs(arr[i]);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    aa(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}