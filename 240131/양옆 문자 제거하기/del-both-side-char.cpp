#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (i != 1 && i != (a.length() - 2))
        {
            cout << a[i];
        }
    }
    return 0;
}