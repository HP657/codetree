#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    string c;
    c = to_string(sum);
    int cnt = 0;
    for (int i = 0;i < c.length(); i++)
    {
        if(c[i] == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}