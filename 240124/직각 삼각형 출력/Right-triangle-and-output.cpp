#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1, k = 1; i <= n; i++, k += 2)
    {
        for (int j = 0; j < k; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}