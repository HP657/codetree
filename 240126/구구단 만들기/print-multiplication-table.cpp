#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = m; j >= n; j--)
        {
            if (j % 2 == 0)
            {
                cout << j << " * " << i << " = " << i * j;
                if (j != n)
                {
                    cout << " / ";
                }
            }
            
        }
        cout << endl;
        
    }

    return 0;
}