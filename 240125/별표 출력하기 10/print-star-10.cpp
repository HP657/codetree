#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= k; j++)
            {
                cout << "* ";
            }
            k++;
        }
        else
        {
            for (int j = 1; j < n - k + 3; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            k--;
            for (int j = 1; j <= k; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j < n - 1 + i - 1; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }    
    return 0;
}