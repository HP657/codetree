#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1, j = 1; i <= n; i++, j += 2)
    {
        for (int k = n - i - 1; k >= 0; k--)
        {
            cout << "  ";
        }
        for (int k = 0; k < j; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}