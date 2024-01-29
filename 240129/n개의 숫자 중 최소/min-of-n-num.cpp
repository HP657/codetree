#include <iostream>
using namespace std;
int main() {
    int n, min = 0, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min == a[i])
        {
            cnt++;
        }
    }
    cout << min << ' ' << cnt;
    return 0;
}