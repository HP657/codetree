#include <iostream>
using namespace std;
int main() {
    double a;
    cin >> a;
    cout << fixed;
    cout.precision(1);
    cout << a * 30.48;
    return 0;
}