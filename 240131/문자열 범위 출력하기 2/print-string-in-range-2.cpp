#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    int b, cnt = 0;
    cin >> b;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        if (cnt >= b)
        {
            break;
        }
        cout << a[i];
        cnt++;
    }
    return 0;
}