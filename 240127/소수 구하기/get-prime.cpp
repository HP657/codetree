#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 2)
    {
        cout << n << ' ';
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 3; j < i; j++)
        {
            if (i % j != 0)
            {
                cout << i << ' ';
                break;
            }
        }
    }
    return 0;
}