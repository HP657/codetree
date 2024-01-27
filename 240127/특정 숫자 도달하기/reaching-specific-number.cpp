#include <iostream>
using namespace std;
int main() {
    int a[10], j;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (a[i] >= 250)
        {
            j = i - 1;
            break;
        }
    }
    int sum = 0, cnt = 0;
    for (int i = 0; i <= j; i++)
    {
        sum += a[i];
        cnt++;
    }
    double avg = (double)sum / cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg;
    return 0;
}