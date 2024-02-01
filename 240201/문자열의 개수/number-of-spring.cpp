#include <iostream>
using namespace std;
int main() {
    string a[201];
    int cnt = 0;
    while(true)
    {
        cin >> a[cnt];
        if (a[cnt] == "0")
        {
            break;
        }
        cnt++;
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; i += 2)
    {
        cout << a[i] << endl;
    }
    return 0;
}