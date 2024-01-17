#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 6, c = 7;
    int temp;
    temp = c;
    c = b;
    b = a;
    a = temp;
    cout << a << endl << b << endl << c;
    return 0;
}