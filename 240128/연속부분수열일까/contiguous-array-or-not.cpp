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


    bool g = false;

    for (int i = 0; i < n; i++)
    {
        g = true;
        for (int j = 0; j < m; j++)
        {
            if (a[i + j] != b[j])
            {
                g = false;
                break;
            }
        }
        if (g)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}