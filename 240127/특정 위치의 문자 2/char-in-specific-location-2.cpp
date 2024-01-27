#include <iostream>
using namespace std;
int main() {
    char a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << a[1] << ' ' << a[4] << ' ' << a[7];
    return 0;
}