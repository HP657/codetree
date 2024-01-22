#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a, j = 0; i <= b; j++)
    {
        cout << i << ' ';
        if (i % 2 == 0)
        {
            i += 3;
        }
        else
        {
            i *= 2;
        }
    }
    return 0;
}