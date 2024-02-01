#include <iostream>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    while (true)
    {
        if (a == b)
        {
            break;
        }
        if (cnt == a.length())
        {
            cnt = -1;
            break;
        }
        a = a.substr(1, a.length()) + a.substr(0, 1);
        cnt++;
    }
    cout << cnt;

    return 0;
}