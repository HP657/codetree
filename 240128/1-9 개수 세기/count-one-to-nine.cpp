#include <iostream>
using namespace std;
int main() {
    int a[10] = {0}, n, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a[b - 1] = 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}