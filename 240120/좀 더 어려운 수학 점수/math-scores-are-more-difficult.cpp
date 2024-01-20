#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if (a > c)
    {
        cout << 'A';
    }
    else if (a == c && b > d)
    {
        cout << 'A';
    }
    else
    {
        cout << 'B';
    }
    return 0;
}