#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        for (int i = n; i > j; i--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}