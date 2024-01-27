#include <iostream>
using namespace std;
int main() {
    int n, m, cnt = 0, sum = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (i == sum)
        {
            cnt += 1;
        }
        sum = 0;
    }
    cout << cnt;
    return 0;
}