#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    double a, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
        cnt++;
    }
    double avg = sum / cnt;
    cout << fixed;
    cout.precision(1);
    cout << avg << endl;
    if (avg >= 4)
    {
        cout << "Perfect";
    }
    else if (avg >= 3)
    {
        cout << "Good";
    }
    else
    {
        cout << "Poor";
    }
    return 0;
}