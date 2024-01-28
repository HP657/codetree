#include <iostream>
using namespace std;
int main() {
    int n, q, b;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int z, x;
    for (int i = 0; i < q; i++)
    {
        cin >> b;
        if (b == 1)
        {
            cin >> z;
            cout << a[z];
        }
        else if (b == 2)
        {
            bool q = true;
            cin >> z;
            for (int j = 0; j < n; j++)
            {
                if (a[j] == z)
                {
                    cout << j + 1;
                    q = false;
                    break;
                }
            }
            if (q)
            {
                cout << 0;
            }
        }
        else
        {
            cin >> z >> x;
            for (int i = z - 1; i < x; i++)
            {
                cout << a[i] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}