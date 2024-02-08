#include <iostream>
#include <climits>
using namespace std;

int aa(int n, int m) {
    int q = n;
    if (n > m)
    {
        q = m;
    }
    for (int i = q; i >= 0; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            return i;
        }
    }

}

int main() {
    int n, m;
    cin >> n >> m;
    int a = aa(n, m);
    cout << a;
    return 0;
}