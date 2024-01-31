#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    string b;
    b = a.substr(1, a.length()) + a.substr(0,1);
    cout << b;
    return 0;
}