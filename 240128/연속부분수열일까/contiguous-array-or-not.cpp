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
        bool match = true;
        for (int j = 0; j < m; j++)
        {
            if (a[i + j] != b[j])
            {
                match = false;
                break;
            }
        }
        if (match) {
            g = true;
            break;
        }
    }

    if (g)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}