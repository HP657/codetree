#include <iostream>
using namespace std;
int main() {
    int a, cnt = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
        {
            continue;
        }
        cnt += 1;
    }
    cout << cnt;
    return 0;
}