#include <iostream>
using namespace std;

void t(int& n, int& m) {
    int temp = n;
    n = m;
    m = temp;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    t(n, m);

    cout << n << " " << m;
    return 0;
}