#include <iostream>
using namespace std;

int aa(int gob, int sum) {
    if (gob == 0) {
        return sum;
    }

    sum += gob % 10;
    gob /= 10;
    return aa(gob, sum);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int gob = a * b * c;
    cout << aa(gob, 0);
    return 0;
}