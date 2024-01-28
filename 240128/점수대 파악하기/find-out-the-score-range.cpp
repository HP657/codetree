#include <iostream>
using namespace std;
int main() {
    int a[10] = {0}, b;
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
    for (int i = 9; i >= 0; i--)
    {
        cout << (i + 1) * 10 << " - " << a[i] << endl;
    }
    return 0;
}