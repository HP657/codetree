#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = ((n * 2) - 1); j >= ((n * 2) - 1) - (i * 2); j--)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < (i * 2 - 2) + 1; j++)
        {
            cout <<'*';
        }
        cout << endl;
    }
    return 0;
}