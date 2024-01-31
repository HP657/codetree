#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    string ee = "ee";
    string ab = "ab";
    bool n = false, m = false;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ee[0])
        {
            if (a[i + 1] == ee[1])
            {
                n = true;
            }
        }
        if (a[i] == ab[0])
        {
            if (a[i + 1] == ab[1])
            {
                m = true;
            }
        }
    }
    if (n)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << ' ';
    if (m)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}