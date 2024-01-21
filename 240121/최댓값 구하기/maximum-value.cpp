#include <iostream>
using namespace std;
int main() {
    int a, b, c, max = 0;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    cout << max;
    return 0;
}