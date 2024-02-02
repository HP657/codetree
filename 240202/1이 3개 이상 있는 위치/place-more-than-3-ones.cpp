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
            int p[4] = {a[i - 1][j], a[i][j - 1], a[i + 1][j], a[i][j + 1]};
            for (int k = 0; k < 4; k++)
            {
                if (p[k] == 1)
                {
                    q++;
                }
            }
            if (q == 3 || q == 4)
            {
                cnt++;
                q = 0;
            }
        }
    }
    cout << cnt;
    return 0;
}