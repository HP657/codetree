#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a = "", b;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a += b;
    }
    cout << a;
    return 0;
}