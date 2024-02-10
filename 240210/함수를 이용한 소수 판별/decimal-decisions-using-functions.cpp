#include <iostream>
using namespace std;

int t(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (b == 1) {
            break;
        }
        bool f = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                f = false;
                break;
            }
        }
        if (f) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << t(a, b);
    return 0;
}