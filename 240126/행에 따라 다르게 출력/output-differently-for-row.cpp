#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 1)
            {
                m++;
                cout << m << ' ';
            }
            else
            {
                m += 2;
                cout << m << ' ';
            }
            
        }
        cout << endl;
    }
    return 0;
}