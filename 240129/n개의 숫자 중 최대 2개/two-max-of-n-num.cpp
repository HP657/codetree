#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n, max1 = INT_MIN, max2 = INT_MIN, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (max1 <= a[i])
        {
            max1 = a[i];
            m = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != m && max2 <= a[i])
        {
            max2 = a[i];
        }
    }
    cout << max1 << ' ' << max2;
    return 0;
}