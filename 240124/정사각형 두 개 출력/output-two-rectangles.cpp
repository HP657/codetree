#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int k = 0; k < 2; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << '*';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}