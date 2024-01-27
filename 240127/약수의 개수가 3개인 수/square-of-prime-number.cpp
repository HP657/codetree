#include <iostream>
using namespace std;
int main() {
    int n, m, cnt, cntt = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        cnt = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 3)
        {
            cntt += 1;
        }
    }
    cout << cntt;
    return 0;
}