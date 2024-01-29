#include <iostream>
using namespace std;
int main() {
    int n, m, q = 0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++, q++)
        {
            if (i % 2 == 0)
            {
                a[j][i] = q;
            }
            else
            {
                a[n - j - 1][i] = q;
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}