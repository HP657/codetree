#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 2)
    {
        cout << 2 << " ";
    }

    for (int i = 3; i <= n; i += 2)
    {
        bool p = true;
        for (int j = 3; j < i; j++)
        {
            if (i % j == 0)
            {
                p = false;
                break;
            }
        }
        if (p)
        {
            cout << i << " ";
        }
    }

    return 0;
}