#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    string a, b;
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        if (b == a)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}