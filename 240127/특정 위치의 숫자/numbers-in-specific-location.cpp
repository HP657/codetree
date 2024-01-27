#include <iostream>
using namespace std;
int main() {
    int a[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    sum += a[2];
    sum += a[4];
    sum += a[9];
    cout << sum;
    return 0;
}