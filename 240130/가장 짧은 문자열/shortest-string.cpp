#include <iostream>
#include <climits>
using namespace std;
int main() {
    string a, b, c;
    cin >> a >> b >> c;
    int d, e, f, n ,m;
    d = a.length();
    e = b.length();
    f = c.length();
    if (d > e && d > e)
    {
        n = d;
    }
    else if (e > d && e > f)
    {
        n = e;
    }
    else
    {
        n = f;
    }
    if (d < e && d < e)
    {
        m = d;
    }
    else if (e < d && e < f)
    {
        m = e;
    }
    else
    {
        m = f;
    }
    cout << n - m;
    return 0;
}