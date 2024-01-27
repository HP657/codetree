#include <iostream>
using namespace std;
int main() {
    int a[10], b, j;
    for (int i = 0; i < 10; i++)
    {
        cin >> b;
        if (b != 0)
        {
            a[i] = b;
            j = i;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i <= j; i++)
    {
        cout << a[j - i] << ' ';
    }
    return 0;
}