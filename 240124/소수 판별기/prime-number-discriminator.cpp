#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    bool b = false;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            b = true;
        }
    }
    if (b)
    {
        cout << 'C';
    }
    else
    {
        cout << 'P';
    }
    return 0;
}