#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a >= 3000)
    {
        cout << "book";
    }
    else if (a >= 1000)
    {
        cout << "mask";
    }
    else
    {
        cout << "no";
    }
    return 0;
}