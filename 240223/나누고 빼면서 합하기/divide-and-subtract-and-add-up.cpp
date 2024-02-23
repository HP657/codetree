#include <iostream>
using namespace std;

int sum = 0;

void addarr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

bool aa(int m) {
    if (m % 2 == 0) {
        return true;
    }
    return false;
}

int bb(int *arr, int m) {
    while (true) {
        sum += arr[m - 1];
        if (m == 1) {
            return sum;
        }
        if (aa(m)) {
            m /= 2;
        }
        else {
            m -= 1;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    addarr(arr, n);
    cout << bb(arr, m);
    return 0;
}