#include <iostream>
using namespace std;
int main() {
    int a[6] = {0}, b;
    for (int i = 0; i < 10; i++)
    {
        cin >> b;
        a[b - 1] += 1;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " - " << a[i] << endl;
    }
    return 0;
}