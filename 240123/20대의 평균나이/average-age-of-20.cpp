#include <iostream>
using namespace std;
int main() {
    int a, sum = 0, cnt = 0;
    double avg;
    while (true)
    {
        cin >> a;
        if (a >= 20 && a < 30)
        {
            sum += a;
            cnt += 1;
        }
        else
        {
            break;
        }
    }
    cout << fixed;
    cout.precision(2);
    avg = (double)sum / cnt;
    cout << avg;
    return 0;
}