#include <iostream>
using namespace std;
int main() {
    int n, a, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
    }
    string str;
    str = to_string(sum);
    sum = sum.substr(1, sum.length()) + sum.substr(0, 1);
    cout << sum;
    return 0;
}