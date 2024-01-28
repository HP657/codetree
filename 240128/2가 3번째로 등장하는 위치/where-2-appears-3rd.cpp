#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            cnt++;
        }
        if (cnt == 3)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}