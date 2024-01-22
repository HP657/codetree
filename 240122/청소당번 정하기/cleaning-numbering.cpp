#include <iostream>
using namespace std;
int main() {
    int a, b = 0, c = 0, d = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (i % 12 == 0)
        {
            b++;
        }
        else if (i % 3 == 0)
        {
            c++;
        }
        else if (i % 2 == 0)
        {
            d++;
        }
    }
    cout << d << ' ' << c << ' ' << b;
    return 0;
}