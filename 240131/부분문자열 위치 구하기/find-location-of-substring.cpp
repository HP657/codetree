#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    string b;
    cin >> b;
    int k = -1;
    int cnt = 0;
    bool p = false;
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 0; j < b.length(); j++)
        {
            if (a[i + j] == b[j])
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if (cnt == b.length())
            {
                k = i;
                break;
            }
        }
    }
    cout << k;
    return 0;
}