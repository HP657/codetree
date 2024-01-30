#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, cnt = 0;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a.length();
        if (a[0] == 'a')
        {
            cnt++;
        }
    }
    cout << sum << ' ' << cnt;
    return 0;
}