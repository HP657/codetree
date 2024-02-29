#include <iostream>
using namespace std;
int cnt = 0;
int aa(int n) {
    
    if (n == 1) {
        return cnt;
    }
    cnt++;
    if (n % 2 == 0) {
        return aa(n / 2);
    }
    else {
        return aa(n / 3);
    }
}

int main() {
    int n;
    cin >> n;
    cout << aa(n);
    return 0;
}