#include <iostream>
using namespace std;
int main() {
    string a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    char b;
    cin >> b;
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i][a[i].length() - 1] == b)
        {
            cout << a[i] << endl;
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << "None";
    }
    return 0;
}