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
    val = a[n - 1] - a[n - 3];
    if (val >= 0)
    {
        cout << val;
    }
    else
    {
        cout << 0;
    }
    
    return 0;
}