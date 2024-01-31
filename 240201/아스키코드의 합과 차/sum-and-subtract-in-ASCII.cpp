#include <iostream>
using namespace std;
int main() {
    char a, b;
    cin >> a >> b;
    cout << int(a) + int(b) << ' ' << abs(int(a) - int(b));
    return 0;
}