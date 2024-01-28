#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int cnt = 0;
    bool g;
    for (int i = 0,j = 0; i < n; i++)
    {
        if (a[i] == b[j])
        {
            g = false;
            for (j = 0; j < m; j++)
            {
                if (a[i + j] == b[j])
                {
                    g = true;
                }
            }
        }
    }
    if (g)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}