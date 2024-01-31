#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    string d = "";
    char b = a[0];
    int cnt = 1;
    for (int i = 1; i < a.length(); i++)
    {
        if (b == a[i])
        {
            cnt++;
        }
        else
        {
            d += b;
            d += to_string(cnt);
            cnt = 1;
            b = a[i];
        }
    }
    d += b;
    d += to_string(cnt);

    cout << d.length() << endl << d;
    return 0;
}