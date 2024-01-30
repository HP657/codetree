#include <iostream>
using namespace std;
int main() {
    int cnt = 0;
    string a;
    getline(cin, a);
    char b;
    cin >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}