#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if ((int(a[i]) >= 48 && int(a[i]) <= 57) || (int(a[i]) >= 97 && int(a[i]) <= 122))
        {
            cout << a[i];
        }
        else if ((int(a[i]) >= 65) && (int(a[i]) <= 90))
        {
            cout << char(int(a[i] + 32));
        }
    }
    return 0;
}