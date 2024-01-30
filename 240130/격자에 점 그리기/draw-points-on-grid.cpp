#include <iostream>
using namespace std;
int main() {
    int n, m, q = 1, b, c;
    cin >> n >> m;
    int a[n][n] = {};
    for (int i = 0; i < m; i++, q++)
    {
        cin >> b >> c;
        a[b - 1][c - 1] = q;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}