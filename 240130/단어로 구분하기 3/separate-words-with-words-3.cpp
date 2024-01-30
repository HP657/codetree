#include <iostream>
using namespace std;
int main() {
    string a[10];
    for (int i = 9; i >= 0; i--)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;   
    }
    return 0;
}