#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    char b;
    cin >> b;
    int j = -1;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b)
        {
            j = i;
            break;
        }
    }
    if (j == - 1)
    {
        cout << "No";
    }
    else
    {
        cout << j;
    }
    return 0;
}