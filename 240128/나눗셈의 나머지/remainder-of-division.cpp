#include <iostream>
using namespace std;
int main() {
    int a, b, i = 0;
    cin >> a >> b;
    int c[b] = {0};
    while (a > 1)
    {
        c[a % b] += 1;
        a = a / b;
        i++;
    }
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum += c[i] * c[i];
    }
    cout << sum;
    return 0;
}