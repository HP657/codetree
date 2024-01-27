#include <iostream>
using namespace std;
int main() {
    double a, sum = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> a;
        sum += a;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum / 8;
    return 0;
}