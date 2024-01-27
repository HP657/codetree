#include <iostream>
using namespace std;
int main() {
    int n, m, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        while (m != 1)
        {
            if (m % 2 == 0)
            {
                m /= 2;
            }
            else
            {
                m = m * 3 + 1;
            }
            cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}