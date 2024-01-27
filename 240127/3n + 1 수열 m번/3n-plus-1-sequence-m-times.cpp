#include <iostream>
using namespace std;
int main() {
    int n, m, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        while (n == 1)
        {
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                n = n * 3 + 1;
            }
            cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}