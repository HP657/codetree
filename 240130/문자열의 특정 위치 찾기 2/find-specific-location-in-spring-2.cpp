#include <iostream>
using namespace std;
int main() {
    string a[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char b;
    cin >> b;
    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < a[i].length(); j++)
        {
            if ((a[i][j] == b && (j == 2 || j == 3)))
            {
                cout << a[i] << endl;
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}