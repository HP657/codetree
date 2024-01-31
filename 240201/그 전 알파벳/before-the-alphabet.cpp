#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;
    int b = int(a) - 1;
    if (b == 96)
    {
        b = 122;
    }
    cout << char(b);
    return 0;
}