#include <iostream>
using namespace std;
int main() {
    int a, i = 1, j = 0;
    cin >> a;
    if (a >= 1 && a <= 10)
    {
        while (true)
        {
            cout << a * i << ' ';
            if (a * i % 5 == 0)
            {
                j++;
            }
            if (j == 2)
            {
                break;
            }
            i++;
        }
    }
    return 0;
}