#include <iostream>
using namespace std;
int main() {
    int n, b;
    cin >> n;
    int a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a[b - 1] += 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}