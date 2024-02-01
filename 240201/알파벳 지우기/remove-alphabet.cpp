#include <iostream>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    string aa = "", bb = "";
    for (int i = 0; i < a.length(); i++)
    {
        if(int(a[i]) >= 48 && int(a[i]) <= 57)
        {
            aa += a[i];
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if(int(b[i]) >= 48 && int(b[i]) <= 57)
        {
            bb += b[i];
        }
    }
    cout << stoi(aa) + stoi(bb);
    return 0;
}