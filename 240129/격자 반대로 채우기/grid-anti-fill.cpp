#include <iostream>
using namespace std;
int main() {
    int n, q = 1;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++, q++)
        {
            if ((n - i -1) % 2 == 1)
            {
                a[n - i - 1][n - j - 1] = q;
            }
            else
            {
                a[n - i - 1][j] = q;
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[j][i] << ' ';
        }
        cout << endl;
    }
    return 0;
}