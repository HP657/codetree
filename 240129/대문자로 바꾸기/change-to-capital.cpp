#include <iostream>
using namespace std;
int main() {
    char a[5][3];
    char b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b;
            a[i][j] = b;;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << char(int(a[i][j]) - 32) << ' ';
        }
        cout << endl;
    }
    return 0;
}