#include <iostream>
using namespace std;
int main() {
    int n;
    char c;
    cin >> c >> n;
    if (c == 'A')
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << ' ';
        }
    }
    if (c == 'D')
    {
        for (int i = n; i >= 1; i--)
        {
            cout << i << ' ';
        }
    }
    return 0;
}