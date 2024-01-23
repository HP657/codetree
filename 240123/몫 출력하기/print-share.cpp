#include <iostream>
using namespace std;
int main() {
    int a, cnt = 0;
    while (true)
    {
        cin >> a;
        if (a % 2 == 1)
        {
            continue;
        }
        else
        {
            cnt += 1;
            cout << a / 2;
        }
        if (cnt == 3)
        {
            break;
        }
        cout << endl;
    }
    return 0;
}