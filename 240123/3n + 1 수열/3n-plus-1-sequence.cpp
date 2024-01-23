#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    while (true)
    {
        if (n == 1)
        {
            break;
        }
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}