#include <iostream>
using namespace std;

int aa(string a, string b) {
    for (int i = 0; i <= a.length(); i++) {
        bool c = true;
        for (int j = 0; j < b.length(); j++) {
            if (a[i + j] != b[j]) {
                c = false;
                break;
            }
        }
        if (c) {
            return i;
        }
    }
    return -1;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << aa(a, b);
    return 0;
}