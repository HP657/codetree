#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j > 0; j--)
        {
            for (int k = 0; k < i; k++)
            {
                cout << "*";
            }
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}