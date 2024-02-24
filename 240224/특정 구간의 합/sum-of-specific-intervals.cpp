#include <iostream>
using namespace std;

int arr[100];

void addarr(int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void pr() {
    int a1, a2;
    int sum = 0;
    cin >> a1 >> a2;
    for (int i = a1 - 1; i <= a2 - 1; i++) {
        sum += arr[i];
    }
    cout << sum << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    addarr(n);
    for (int i = 0; i < m; i++) {
        pr();
    }
    return 0;
}