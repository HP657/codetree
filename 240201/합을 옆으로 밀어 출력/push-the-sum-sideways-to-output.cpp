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
    str = str.substr(1, str.length()) + str.substr(0, 1);
    cout << str;
    return 0;
}