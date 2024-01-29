#include <iostream>
using namespace std;
int main() {
    int n, val = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            val -= a[i];
        }
        else
        {
            val += a[i];
        }
    }
    if (val >= 0)
    {
        val = a[n - 1] - val;
        cout << val;
    }
    else
    {
        cout << 0;
    }
    
    return 0;
}