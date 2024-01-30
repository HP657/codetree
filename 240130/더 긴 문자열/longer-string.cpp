#include <iostream>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    if (a.length() > b.length())
    {
        cout << a << ' ' << a.length();
    }
    else
    {
        cout << b << ' ' << b.length();
    }
    return 0;
}