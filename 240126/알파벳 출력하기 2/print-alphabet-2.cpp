#include <iostream>
using namespace std;
int main() {
    int n, m = 65;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > n - i; j--)
        {
            cout << "  ";
        }
        for (int j = n; j > i; j--, m++)
        {
            cout << char(m) << ' ';
            if (char(m) == 'Z')
            {
                m = 64;
            }
        }
        cout << endl;
    }
    return 0;
}