#include <iostream>
using namespace std;
int main() {
    int n, i = 0;
    cin >> n;
    while (n >= 1)
    {
        i++;
        n /= i;
    }
    cout << i;
    return 0;
}