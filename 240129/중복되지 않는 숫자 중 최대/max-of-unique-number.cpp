#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n, max = INT_MIN, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (max < a[i])
        {
            max = a[i];
            for (int j = 0; j < n; j++)
            {
                if (max == a[i])
                {
                    cnt++;
                }
                if (cnt == 2)
                {
                    cnt = 0;
                    break;
                }
            }
        }
    }
    cout << max;
    return 0;
}