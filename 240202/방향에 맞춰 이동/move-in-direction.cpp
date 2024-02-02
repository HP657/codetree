#include <iostream>
using namespace std;
int main() {
    int x = 0, y = 0;
    int n;
    cin >> n;
    char a;
    int b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a == 'N')
        {
            y += b;
        }
        else if (a == 'S')
        {
            y -= b;
        }
        else if (a == 'E')
        {
            x += b;
        }
        else
        {
            x -= b;
        }
    }
    cout << x << ' ' << y;
    return 0;
}