#include <iostream>
using namespace std;
int main() {
    string n;
    cin >> n;
    int num = 3; 
    int x = 0, y = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == 'L')
        {
            num = (num + 3) % 4;
        }
        else if (n[i] == 'R')
        {
            num = (num + 1) % 4;
        }
        else
        {
            x += dx[num];
            y += dy[num];

        }

    }


    
    cout << x << ' ' << y;
    // 여기서부터 빡세네...
    return 0;
}