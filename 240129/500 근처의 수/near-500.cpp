#include <iostream>
#include <climits>
using namespace std;
int main() {
    int a[10], max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (max <= a[i] && a[i] < 500)
        {
            max = a[i];
        }
        if (min >= a[i] && a[i] > 500)
        {
            min = a[i];
        }
    }
    cout << max << ' ' << min;
    return 0;
}