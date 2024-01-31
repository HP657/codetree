#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;
    if (int(a) == 122)
    {
        a = 65;
    }
    cout << char(a);
    return 0;
}