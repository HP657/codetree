#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    char b;
    cin >> b;
    int j;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b)
        {
            j = i;
            break;
        }
    }
    cout << j;
    return 0;
}