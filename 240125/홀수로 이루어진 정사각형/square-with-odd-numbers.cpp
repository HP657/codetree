#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0, k = 11; j < n; j++, k += 2)
        {
            if (i == 0)
            {
                a[i][j] = k;
            }
            else
            {
                a[i][j] = a[i - 1][j] + 2;
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