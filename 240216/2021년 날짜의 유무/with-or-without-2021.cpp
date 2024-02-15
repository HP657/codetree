#include <iostream>
using namespace std;

bool dd (int d, int ddd) {
    if (ddd < d) {
        return false;
    }
    return true;
}

bool mm(int m, int d) {
    if (m > 12) {
        return false;
    }
    int ddd;
    if (m % 2 == 1) {
        if (m <= 7) {
            ddd = 31;
        }
        else {
            ddd = 30;
        }
    }
    else{
        if (m <= 7) {
            ddd = 30;
        }
        else if (m == 2) {
            ddd = 28;
        }
        else {
            ddd = 31;
        }
    }
    
    return dd(d, ddd);
}

int main() {
    int m, d;
    cin >> m >> d;
    if (mm(m, d)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}