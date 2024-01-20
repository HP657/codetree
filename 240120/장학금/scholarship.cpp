#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a >= 90 && b >= 95)
    {
        cout << 100000;
    }
    else if (a >= 90 && b >= 90)
    {
        cout << 50000;
    }
    else
    {
        cout << 0;
    }
    return 0;
}