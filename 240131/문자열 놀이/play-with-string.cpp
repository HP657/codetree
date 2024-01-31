#include <iostream>
using namespace std;
int main() {
    string s;
    int q;
    cin >> s >> q;
    int a, b, c, temp;
    char d, e;
    for (int i = 0; i < q; i++)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> b >> c;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == s[b])
                {
                    s[j] = s[c];
                }
                else if (s[j] == s[c])
                {
                    s[j] = s[b];
                }
            }
            cout << s << endl;;
        }
        else if (a == 2)
        {
            cin >> d >> e;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == d)
                {
                    s[j] = e;
                }
            }
            cout << s << endl;
        }
    }

    return 0;
}