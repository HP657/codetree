#include <iostream>
using namespace std;
int main() {
    int n, m = 65;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++, m++)
        {
            cout << char(m);
        }
        cout << endl;
    }
    
    return 0;
}