#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int cnt = 0;
    if (a.length() != b.length())
    {
        cout << -1;
        return 0;
    }

    while (a != b)
    {
        a = a.substr(1) + a[0]; 
        cnt++;

        if (cnt > a.length())
        {
            cnt = -1;
            break;
        }
    }

    cout << cnt;

    return 0;
}