#include <iostream>
using namespace std;
int main() {
    char a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[10 - i - 1];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i];
    }
    return 0;
}