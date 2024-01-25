#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a[(2 * n) + 1][(2 * n) + 1];
    for (int i = 0; i < (2 * n) + 1; i++)
    {
        for (int j = 0; j < (2 * n) + 1; j++)
        {
            if (i % 2 == 1 && j % 2 == 1)
            {
                a[i][j] = "  ";
            }
            else
            {
                a[i][j] = "* ";
            }
        }
    }
    for (int i = 0; i < (2 * n) + 1; i++)
    {
        for (int j = 0; j < (2 * n) + 1; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}