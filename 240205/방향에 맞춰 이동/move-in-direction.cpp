#include <iostream>
using namespace std;
int main() {
    int x = 0, y = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    int n;
    cin >> n;
    char a;
    int b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a == 'E')
        {
            d = 0;
        }
        else if (a == 'W')
        {
            d = 1;
        }
        else if (a == 'S')
        {
            d = 2;
        }
        else
        {
            d = 3;
        }
        x += dx[d] * b;
        y += dy[d] * b;
    }
    cout << x << ' ' << y;
    return 0;
}