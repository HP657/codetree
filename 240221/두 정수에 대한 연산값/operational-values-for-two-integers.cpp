#include <iostream>
using namespace std;

bool bb(int *a, int *b) {
    return *a > *b ? true : false;
}

void aa(int *a, int *b) {
    if (bb(a, b)) {
        *a += 25;
        *b *= 2;
    } else {
        *b += 25;
        *a *= 2;
    }


}
int main() {
    int a, b;
    cin >> a >> b;
    aa(&a, &b);
    cout << a << ' ' << b;
    return 0;
}