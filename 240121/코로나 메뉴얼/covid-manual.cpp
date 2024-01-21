#include <iostream>
using namespace std;
int main() {
    char a, b, c, m = 0;
    int d, e, f;
    cin >> a >> d;
    cin >> b >> e;
    cin >> c >> f;
    if (d >= 37 && a == 'Y')
    {
        m += 1;
    }
    if (e >= 37 && b == 'Y')
    {
        m += 1;
    }
    if (f >= 37 && c == 'Y')
    {
        m += 1;
    }
    if (m >= 2)
    {
        cout << 'E';
    }
    else
    {
        cout << 'N';
    }
    return 0;
}