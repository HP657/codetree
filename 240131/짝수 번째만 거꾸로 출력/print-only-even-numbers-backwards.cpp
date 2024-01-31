#include <iostream>
using namespace std;
int main() {
    string a, b = "";
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (i % 2 == 1)
        {
            b += a[i];
        }
    }
    for (int i = b.length() - 1; i >= 0; i--)
    {
        cout << b[i];
    }
    return 0;
}