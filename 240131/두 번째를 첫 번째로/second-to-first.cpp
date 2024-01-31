#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    char b = a[1];
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b)
        {
            a[i] = a[0];
        }
    }
    cout << a;
    return 0;
}