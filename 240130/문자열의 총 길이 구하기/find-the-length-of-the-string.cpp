#include <iostream>
using namespace std;
int main() {
    string a;
    getline(cin, a);
    int cnt = 0;
    for (int i = 0 ; i < a.length(); i++)
    {
        if (a[i] == ' ')
        {
            cnt++;
        }
    }
    cout << a.length() - cnt;
    return 0;
}