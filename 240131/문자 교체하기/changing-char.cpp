#include <iostream>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < 2; i++)
    {
        b[i] = a[i];
    }
    cout << b;
    return 0;
}