#include <iostream>
using namespace std;

void aa(int n) {
    if (n == 0) {
        return;
    }
    cout << "HelloWorld" << endl;
    aa(n - 1);
}

int main() {
    int n;
    cin >> n;
    aa(n);
    return 0;
}