#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cntt = 0;

    for (int i = n; i <= m; i++) {
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }
        if (cnt == 3) {
            cntt++;
        }
    }
    
    cout << cntt;
    return 0;
}