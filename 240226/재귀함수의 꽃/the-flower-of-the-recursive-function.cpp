#include <iostream>
using namespace std;

void aa(int n) {
    if (n == 0) {
        return;
    }
    cout << n << ' ';
    aa(n - 1);
    cout << n << ' ';
}
int main() {
    int n;
    cin >> n;
    aa(n);
    return 0;
}