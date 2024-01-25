#include <iostream>
using namespace std;
int main() {
    int n, cnt = 2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << cnt << ' ';
            cnt += 2;
            if (cnt == 10)
            {
                cnt = 2;
            }
        }
        cout << endl;
    }
    return 0;
}