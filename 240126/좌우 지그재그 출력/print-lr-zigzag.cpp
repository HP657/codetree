#include <iostream>
using namespace std;
int main() {
    int n, cnt = 1;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                a[i][j] = cnt;
                cnt++;
            }
            else
            {
                a[i][n - j - 1] = cnt;
                cnt++;
            }

        }
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