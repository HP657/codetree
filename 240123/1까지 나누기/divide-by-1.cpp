#include <iostream>
using namespace std;
int main() {
    int n, i = 0;
    cin >> n;
    while (true)
    {
        i++;
        n /= i;
        if (n <= 1)
        {
            break;
        }
    }
    cout << i;
    return 0;
}