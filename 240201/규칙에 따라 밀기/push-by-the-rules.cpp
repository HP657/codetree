#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    string b;
    cin >> b;
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == 'L')
        {
            a = a.substr(1, a.length()) + a.substr(0, 1);
        }
        else if (b[i] == 'R')
        {
            a = a.substr(a.length() - 1, a.length()) + a.substr(0, a.length() - 1);
        }
    }
    cout << a;
    return 0;
}