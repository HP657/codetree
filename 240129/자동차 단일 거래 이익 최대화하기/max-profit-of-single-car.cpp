#include <iostream>
using namespace std;
int main() {
    int n, val;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[j] - a[i] > max)
            {
                max = a[j] - a[i];
            }
        }
    }
    cout << max;
    return 0;
}