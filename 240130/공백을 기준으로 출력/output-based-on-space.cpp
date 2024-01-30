#include <iostream>
using namespace std;
int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != ' ')
        {
            cout << a[i];
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] != ' ')
        {
            cout << b[i];
        }
    }
    return 0;
}