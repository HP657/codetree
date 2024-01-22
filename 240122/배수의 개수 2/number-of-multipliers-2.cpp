#include <iostream>
using namespace std;
int main() {
    int a, cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        if (a % 2 == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}