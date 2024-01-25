#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int g = 1, k = n;
    for (int i = 1; i <= n * 2; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < k; j++)
            {
                cout << "* ";
            }
            k--;
        }
        else
        {
            for (int j = 1; j <= g; j++)
            {
                cout << "* ";
            }
            g++;
        }
        cout << endl;
    }
    return 0;
}