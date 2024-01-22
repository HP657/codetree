#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << a << ' ';
    for (int i = a, j = 0; i < b; j++)
    {
        if (i % 2 == 0)
        {
            i += 3;
        }
        else
        {
            i *= 2;
        }
        cout << i << ' ';
    }
    return 0;
}