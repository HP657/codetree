#include <iostream>
using namespace std;

int aa(int n) {
    int m = n / 10;
    if (n % 2 == 0 && (m + n) % 5 == 0) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int n;
    cin >> n;
    bool a = aa(n);
    if (a) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}