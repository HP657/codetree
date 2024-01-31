#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a = "";
    string b;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a += b;
    }
    int cnt = 0, i = 0;
    while (true)
    {
        cout << a[i];
        i++;
        cnt++;
        if (cnt == 5)
        {
            cout << endl;
            cnt = 0;
        }
        if (i == a.length())
        {
            break;
        }
    }
    return 0;
}