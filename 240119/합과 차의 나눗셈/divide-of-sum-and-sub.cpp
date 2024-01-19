#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(2);
    double c = double(a + b) / double(a - b);
    cout << c;
    return 0;
}