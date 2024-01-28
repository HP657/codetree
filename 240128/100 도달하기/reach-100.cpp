#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int n, m, temp, i = 0;
    n = 1, m = a;
    while (true)
    {
        if (i % 2 == 0)
        {
            temp = n;
            cout << temp << ' ';
            n = n + m;
        }
        else
        {
            temp = m;
            cout << temp << ' ';
            m = n + m;
        }
        if (temp >= 100)
        {
            break;
        }
        i++;

    }
    return 0;
}