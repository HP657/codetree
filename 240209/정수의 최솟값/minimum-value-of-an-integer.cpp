#include <iostream>
using namespace std;

int aa(int a, int b, int c) {
    int result = (a <= b) ? ((a <= c) ? a : c) : ((b <= c) ? b : c);
    return result; 
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int aaa = aa(a, b, c);
    cout << aaa;
    return 0;
}