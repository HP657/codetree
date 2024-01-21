#include <iostream>
using namespace std;
int main() {
    int a, b, c, m = 0;
    cin >> a >> b >> c;
    if ((a >= b && a <= c) || (a >= c && a <= b))
    {
        m = a;
    }
    else if ((b >= a && b <= c) || (b >= c && b <= a))
    {
        m = b;
    }
    else
    {
        m = c;
    }
    cout << m;
    return 0;
}