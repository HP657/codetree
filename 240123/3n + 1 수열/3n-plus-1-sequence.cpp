#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    while (true)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
        cnt++;
        if (n == 1)
        {
            break;
        }
    }
    cout << cnt;
    return 0;
}