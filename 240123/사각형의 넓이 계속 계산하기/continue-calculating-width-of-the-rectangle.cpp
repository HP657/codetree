#include <iostream>
using namespace std;
int main() {
    int x, y;
    char a;
    while (true)
    {
        cin >> x >> y >> a;;
        cout << x * y;
        if (a == 'C')
        {
            break;
        }
        cout << endl;
    }
    return 0;
}