#include <iostream>
using namespace std;
int main() {
    int n, q = 1;
    cin >> n;
    int a[n][n] ={};
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--, q++)
        {
            if (n % 2 == 0)
            {
                if (i % 2 == 0)
                {
                    a[n - j - 1][i] = q;
                }
                else
                {
                    a[j][i] = q;
                }
            }
            else
            {
                if (i % 2 == 1)
                {
                    a[n - j - 1][i] = q;
                }
                else
                {
                    a[j][i] = q;
                }
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