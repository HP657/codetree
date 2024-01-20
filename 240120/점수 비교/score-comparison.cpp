#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if (a > c && b > d)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}