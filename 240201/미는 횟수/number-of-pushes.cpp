#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.length() < b.length())
    {
        cout << -1 << endl;
        return 0;
    }

    int cnt = -1; 
    for (int i = 0; i < a.length(); ++i)
    {
        string c = a.substr(a.length() - i) + a.substr(0, a.length() - i);
        if (c == b)
        {
            cnt = i;
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}