#include <iostream>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int cnt = 0, q = 0;
    for (int i = 0; i < a.length(); i++)
    {
        q = 0;
        if (a[i] == b[0])
        {
            for (int j = 0; j < b.length(); j++)
            {
                if (a[i + j] == b[j])
                {
                    q++;
                }
                else
                {
                    break;
                }
            }
            
        }
        if (q == b.length())
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}