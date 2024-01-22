#include <iostream>
using namespace std;
int main() {
    int a, n;
    cin >> a >> n;
    for (int i = 0, j = a + n; i < n; i++, j += n)
    {
        cout << j << endl;
    }
    return 0;
}