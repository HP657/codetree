#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = n - i; j < n; j++)
        {
            cout << "@ ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = (n - 1) - i; j >= 0; j--)
        {
            cout << "@ ";
        }
        cout << endl;
    }
    return 0;
}