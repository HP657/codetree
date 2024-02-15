#include <iostream>
using namespace std;

bool cc(int n) {
    if(n == 1) {
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

bool dd(int n) {
    int sum = (n / 100) + ((n / 10) % 10) + (n % 10);
    if(sum % 2 == 0) {
        return true;
    }
    return false;
}
bool bb(int n) {
    if (cc(n) && dd(n)) {
        return true;
    }
    return false;
}

int aa(int a, int b) {
    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(bb(i)) {
            cnt++;
        }
    }
    return cnt;
}


int main() {
    int a, b;
    cin >> a >> b;
    cout << aa(a, b);
    return 0;
}