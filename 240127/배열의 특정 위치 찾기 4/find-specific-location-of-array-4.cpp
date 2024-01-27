#include <iostream>
using namespace std;
int main() {
    int a, sum = 0, cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        if (a != 0)
        {
            if (a % 2 == 0)
            {
                sum += a;
                cnt++;
            }
           
        }
        else
        {
            break;
        }
    }
    cout << cnt << ' ' << sum;
    return 0;
}