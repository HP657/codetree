#include <iostream>
using namespace std;
int main() {
    int a, sum = 0;
    cin >> a;
    if (a <= 100)
    {
        for (int i = a; i <= 100; i++)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}