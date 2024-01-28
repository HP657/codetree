#include <iostream>
using namespace std;
int main() {
    char a[6] = {'L', 'E', 'B', 'R', 'O', 'S'}, b;
    cin >> b;
    bool c = false;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] == b)
        {
            cout << i;
            c = true;
            break;
        }
    }
    if (!c)
    {
        cout << "None";
    }
    return 0;
}