#include <iostream>
using namespace std;
int main() {
    int a, b;
    char c, d;
    cin >> a >> c;
    cin >> b >> d;
    if (((a >= 19) && (b == 'M')) || ((c >= 19) && (d == 'M')))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}