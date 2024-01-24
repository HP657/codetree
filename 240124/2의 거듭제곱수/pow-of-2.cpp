#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int i = 0;
    while (true)
    {
        a /= 2;
        i++;
        if (a == 1)
        {
            break;
        }
    }
    cout << i;
    return 0;
}