#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int q = 0;
            if (i > 0 && a[i - 1][j] == 1)
            {
                q++;
            }
            if (j > 0 && a[i][j - 1] == 1)
            {
                q++;
            }
            if (i < n - 1 && a[i + 1][j] == 1)
            {
                q++;
            }
            if (j < n - 1 && a[i][j + 1] == 1)
            {
                q++;
            }

            if (q == 3 || q == 4)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}