#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    char b = a[0];
    char c = a[1];
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b)
        {
            a[i] = c;
        }
        else if (a[i] == c);
        {
            a[i] = b;
        }
    }
    cout << a;
    return 0;
}