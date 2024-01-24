#include <iostream>
using namespace std;
int main() {
    int a;
    bool b = false;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        if (a % 3 == 0)
        {
            b = true;
        }
        else
        {
            b = false;
            break;
        }
    }
    if (b)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}