#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n, max = INT_MIN, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (max <= a[i])
        {
            max = a[i];
            m = i;
        }
    }
    cout << max << ' ';
    max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (i != m && max <= a[i])
        {
            max = a[i];
        }
    }
    cout << max;
    return 0;
}