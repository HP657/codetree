#include <iostream>
using namespace std;
int main() {
    int n, a, b, c, d, sum = 0, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        sum = a + b + c + d;
        double avg = (double)sum / 4;
        if (avg >= 60)
        {
            cout << "pass";
            cnt++;
        }
        else
        {
            cout << "fail";
        }
        cout << endl;
    }
    cout << cnt;
    return 0;
}