#include <iostream>
using namespace std;

int a(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum / 10;
}
int main() {
    int n;
    cin >> n;
    int aaa = a(n);
    cout << aaa;
    return 0;
}