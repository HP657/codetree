#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    for (int i = 1; i <= n; i++)
    {
        if (a % 2 == 0 || a % 3 == 0)
        {
            cout << 1 << ' ';
        } 
        else
        {
            cout << 0 << ' ';
        }
    }
    return 0;
}