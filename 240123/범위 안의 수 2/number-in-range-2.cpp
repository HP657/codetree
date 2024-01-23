#include <iostream>
using namespace std;
int main() {
    int a, sum = 0, cnt = 0;
    double avg;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        if (a >= 0 && a <= 200)
        {
            sum += a;
            cnt += 1;
        }
    }
    avg = (double)sum / cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg;
    return 0;
}