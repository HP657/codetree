#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    string b;
    cin >> b;

    int k = -1;

    for (int i = 0; i <= a.length(); i++)
    {
        bool p = true;

        for (int j = 0; j < b.length(); j++)
        {
            if (a[i + j] != b[j])
            {
                p = false;
                break;
            }
        }

        if (p) {
            k = i;
            break;
        }
    }

    cout << k;
    return 0;
}