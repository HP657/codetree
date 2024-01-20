#include <iostream>
using namespace std;
int main() {
    int a, b, c, min = 0;
    cin >> a >> b >> c;
    if (a <= b && a <= c)
    {
        min = a;
    }
    else
    {
        if (b < c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
    }
    cout << min;
    return 0;
}