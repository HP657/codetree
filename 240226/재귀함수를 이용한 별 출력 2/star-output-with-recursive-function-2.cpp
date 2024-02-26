#include <iostream>
using namespace std;

void aa(int n) {
    if (n == 0) {
        return;
    }
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
    aa(n - 1);
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    aa(n);
    return 0;
}