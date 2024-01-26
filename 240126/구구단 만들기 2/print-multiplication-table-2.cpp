#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 2; i <= 8; i += 2)
    {
        for (int j = m; j >= n; j--)
        {
            cout << j << " * " << i << " = " << i * j;
            if (j != n)
            {
                cout << " / ";
            }
        }
        cout << endl;
    }
    return 0;
}