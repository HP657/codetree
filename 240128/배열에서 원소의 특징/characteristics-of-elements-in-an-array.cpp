#include <iostream>
using namespace std;
int main() {
    int a[10], b;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (a[i] % 3 == 0)
        {
            b = i;
            break;
        }
    }
    cout << a[b - 1];
    return 0;
}