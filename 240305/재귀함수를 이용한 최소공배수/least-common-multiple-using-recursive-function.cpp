#include <iostream>
using namespace std;

// 최대공약수를 구하는 함수 (유클리드 호제법 이용)
int bb(int a, int b) {
    if (b == 0)
        return a;
    return bb(b, a % b);
}

// 최소공배수를 구하는 함수
int aa(int arr[], int n, int i = 0) {
    if (i == n - 1)
        return arr[i];
    arr[i + 1] = (arr[i] * arr[i + 1]) / bb(arr[i], arr[i + 1]);
    return aa(arr, n, i + 1);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << aa(arr, n);

    return 0;
}