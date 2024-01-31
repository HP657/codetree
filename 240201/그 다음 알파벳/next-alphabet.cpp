#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;
    int b = int(a) + 1;
    if (b == 123)
    {
        b = 65;
    }
    cout << char(b);
    return 0;
}