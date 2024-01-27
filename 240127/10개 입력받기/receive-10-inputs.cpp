#include <iostream>
using namespace std;
int main() {
    int cnt = 0, a, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        if (a != 0)
        {
            sum += a;
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum / cnt;
    return 0;
}