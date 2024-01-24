#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    bool c = false;
    for (int i = a; i <= b; i++)
    {
        if (1920 % i == 2880 % i)
        {
            c = true;
            break;
        }
    }
    if (c)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}