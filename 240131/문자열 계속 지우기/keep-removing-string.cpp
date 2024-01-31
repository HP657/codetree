#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int c = b.length();
    for (int i = 0; i <= a.length() - c; i++)
    {
        bool match = true;
        for (int j = 0; j < c; j++)
        {
            if (a[i + j] != b[j])
            {
                match = false;
                break;
            }
        }
        if (match) {
            a.erase(i, c);
            i -= c; 
        }
    }

    cout << a;
    return 0;
}