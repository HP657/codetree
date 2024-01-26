#include <iostream>
using namespace std;
int main() {
    int n, m = 1;
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++, m++)
        {
            cout << m << ' ';
            if(m == 9)
            {
                m = 0;
            }
        }
        cout << endl;
    }
    return 0;
}