#include <iostream>
using namespace std;

bool aa(int n) {
    bool b = false;
    if (n % 4 == 0) {
        if (n % 100 != 0) {
            b = true;
        }
        else {
            if (n % 400 == 0) {
                b = true;
            }
            else {
                b = false;
            }
        }
    }
    else {
        b = false;
    }

    return b;
}

int main() {
    int y;
    cin >> y;
    bool c = aa(y);
    if (c) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}