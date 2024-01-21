#include <iostream>
using namespace std;
int main() {
    int a, b;
    char c, d;
    cin >> a >> c;
    cin >> b >> d;
    if ((a >= 19 || c >= 19) && (b == 'M' || d == 'M'))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}