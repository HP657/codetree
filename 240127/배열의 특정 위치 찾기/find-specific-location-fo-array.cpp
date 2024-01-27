#include <iostream>
using namespace std;
int main() {
    int a[10], sum1 = 0, sum2 = 0, cnt = 0;
    for (int i = 1; i <= 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            sum1 +=  a[i];
        }
        if (i % 3 == 0)
        {
            sum2 += a[i];
            cnt++;
        }
    }
    double avg = (double)sum2 / cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum1 << ' ' << avg; 
    return 0;
}