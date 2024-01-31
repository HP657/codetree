#include <iostream>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int cnt = 0, q = 0;
    for (int i = 0; i < a.length(); i++)
    {
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
                if (q == b.length())
                {
                    cnt++;
                    q = 0;
                }
            }
        }
        
    }
    cout << cnt;
    return 0;
}