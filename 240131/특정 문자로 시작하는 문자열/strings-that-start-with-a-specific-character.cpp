#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    char b;
    cin >> b;
    int cnt = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] == b)
        {
            cnt++;
            sum += a[i].length();
        }
    }
    cout << fixed;
    cout.precision(2);
    double avg = (double)sum / cnt;
    cout << cnt << ' ' << avg;
    return 0;
}