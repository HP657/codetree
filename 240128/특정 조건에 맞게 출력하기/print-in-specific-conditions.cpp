#include <iostream>
using namespace std;
int main() {
    int a;
    while (true)
    {
        cin >> a;
        if (a == 0)
        {
            break;
        }
        if (a % 2 == 1)
        {
            cout << a + 3;
        }
        else
        {
            cout << a / 2;
        }
        cout << ' ';
    }
    return 0;
}