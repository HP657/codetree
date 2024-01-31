#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    int b;
    cin >> b;
    for (int i = a.length() - 1; i >= a.length() - b; i--)
    {
        cout << a[i];
    }
    return 0;
}