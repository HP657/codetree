#include <iostream>
using namespace std;
int main() {
    int a[100] = {0}, b, i = 0;
    while (true)
    {
        cin >> b;
        if (b == 0)
        {
            break;
        }
        else
        {
            a[(b / 10) - 1] += 1;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        cout << i + 1 << " - " << a[i] << endl;
    }
    return 0;
}