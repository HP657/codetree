#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    int b;
    while (true)
    {
        cin >> b;
        if (b >= a.length())
        {
            a.erase(a.length() - 1, 1);
        }
        else
        {
            a.erase(b, 1);
        }
       
        cout << a << endl;
        if (a.length() == 0)
        {
            break;
        }
    }
    return 0;
}