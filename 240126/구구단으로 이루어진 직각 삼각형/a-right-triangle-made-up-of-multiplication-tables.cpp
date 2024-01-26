#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n - i + 1 << " * " << j << " = " << (n - i + 1) * j;
            if (i == j)
            {
                cout << endl;
            }
            else
            {
                cout << " / ";
            }
        }
    }
    return 0;
}