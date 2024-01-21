#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a >= 1 && a <= 12)
    {
        if (a <= 7)
        {
            if (a % 2 == 1)
            {
                cout << 31;
            }
            else if (a == 2)
            {
                cout << 28;
            }
            else
            {
                cout << 30;
            }
        }
        else
        {
            if(a % 2 == 0)
            {
                cout << 31;
            }
            else
            {
                cout << 30;
            }
        }
    }
    
    else
    return 0;
}