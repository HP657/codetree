#include <iostream>
using namespace std;

int n, t;
int x, y, dir;

int dx[4] = {0, 1, -1,  0};
int dy[4] = {1, 0,  0, -1};

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int qq(char a) {
    if(a == 'R')
        return 0;
    else if(a == 'D')
        return 1;
    else if(a == 'U')
        return 2;
    else
        return 3;
}
int main() {
    cin >> n >> t;
    
    char c_dir;
    cin >> x >> y >> c_dir;
    x--; y--;
    dir = qq(c_dir);
    
    while(t--) {
        int nx = x + dx[dir], ny = y + dy[dir];
        if(InRange(nx, ny)) {
            x = nx, y = ny;
        }
        else
            dir = 3 - dir;
    }
    
    cout << x + 1 << " " << y + 1;
    return 0;
}