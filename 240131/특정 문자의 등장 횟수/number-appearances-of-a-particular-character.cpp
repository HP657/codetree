#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    string ee = "ee", eb = "eb";
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ee[0] && a[i + 1] == ee[1])
        {
            cnt1++;
        }
        if (a[i] == eb[0] && a[i + 1] == eb[1])
        {
            cnt2++;
        }
    }
    cout << cnt1 << ' ' << cnt2;
    return 0;
}