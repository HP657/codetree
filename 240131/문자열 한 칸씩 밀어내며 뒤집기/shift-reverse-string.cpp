#include <iostream>
using namespace std;
int main() {
    string a;
    int b;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            a = a.substr(1,a.length()) + a.substr(0,1);
        }
        else if (c == 2)
        {
            a = a.substr(a.length() - 1, a.length()) + a.substr(0, a.length() - 1);
        }
        else if (c == 3)
        {
            string q;
            for (int j = a.length() - 1; j >= 0; j--)
            {
                q += a[j];
            }
            a = q;
        }
        cout << a << endl;
    }
    return 0;
}