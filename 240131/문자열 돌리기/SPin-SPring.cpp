#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;

    cout << a << endl;
    for (int i = 0; i < a.length(); i++)
    {
        a = a.substr(a.length() - 1, 1) + a.substr(0, a.length() - 1);
        cout << a << endl;
    }

    return 0;
}