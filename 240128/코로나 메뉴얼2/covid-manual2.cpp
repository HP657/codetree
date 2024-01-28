#include <iostream>
using namespace std;
int main() {
    char n;
    int m, a[4] = {0};
    for (int i = 0; i < 3; i++)
    {
        cin >> n >> m;
        if (n == 'Y')
        {
            if (m >= 37)
            {
                a[0] += 1;
            }
            else
            {
                a[2] += 1;
            }
        }
        else
        {
            if (m >= 37)
            {
                a[1] += 1;
            }
            else
            {
                a[3] += 1;
            }
        }
    }
    cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3] << ' ';
    if (a[0] >= 2)
    {
        cout << 'E';
    }
    return 0;
}