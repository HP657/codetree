#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (!((i % 2 == 0 && i % 4 != 0) || ((i / 8) % 2 == 0) || (i % 7 < 4)))
        {
            cout << i << ' ';
        }
    }
    return 0;
}