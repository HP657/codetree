#include <iostream>
using namespace std;
int main() {
    int a, i = 1;
    while (true)
    {
        cin >> a;
        if (a == 0)
        {
            break;
        }
        if (i % 2 == 1)
        {
            cout << a + 3;
        }
        else
        {
            cout << a / 2;
        }
        i++;
        cout << ' ';
    }
    return 0;
}