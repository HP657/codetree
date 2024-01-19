#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(2);
    double c = (a + b) // (a - b);
    cout << c;
    return 0;
}