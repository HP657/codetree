#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    string a;
    a = to_string(n);
    for (int i = 0; i < a.length(); i++)
    {
        sum += int(a[i]) - 48;
    }
    cout << sum;
    return 0;
}