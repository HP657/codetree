#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool d = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            d = true;
        }
    }
    if (d)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}