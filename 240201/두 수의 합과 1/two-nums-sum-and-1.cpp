#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    sum = to_string(sum);
    int cnt = 0;
    for (int i = 0;i < sum.length(); i++)
    {
        if(sum[i] == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}