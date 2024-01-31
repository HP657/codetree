#include <iostream>
using namespace std;
int main() {
    string s;
    int q;
    char temp;
    int a, b, c;
    char d, e;
    cin >> s >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> b >> c;
            for (int j = 0; j < s.length(); j++)
            {
                char temp = s[b - 1];
                s[b - 1] = s[c - 1];
                s[c - 1] = temp;
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