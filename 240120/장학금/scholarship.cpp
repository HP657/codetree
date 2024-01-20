#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a >= 90 && b >= 95)
    {
        cout << 10;
    }
    if (a >= 90 && b >= 90)
    {
        cout << 5;
    }
    else
    {
        cout << 0;
    }
    return 0;
}