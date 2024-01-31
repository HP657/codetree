#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'e')
        {
            a.erase(i,1);
            break;
        }
    }
    cout << a;
    return 0;
}