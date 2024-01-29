#include <iostream>
#include <climits>
using namespace std;
int main() {
    int min = INT_MAX, max = INT_MIN;
    int a;
    while (true)
    {
        cin >> a;
        if (a == 999 || a == -999)
        {
            break;
        }
        else
        {
            if (a >= max)
            {
                max = a;
            }
            if (a <= min)
            {
                min = a;
            }
        }
    }
    cout << max << ' ' << min;
    return 0;
}