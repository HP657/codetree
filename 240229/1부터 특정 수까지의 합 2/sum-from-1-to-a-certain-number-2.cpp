#include <iostream>
using namespace std;

int aa(int n) {
    int sum = 0;
    if (n == 0) {
        return sum;
    }

    sum += n;
    return aa(n - 1) + n;

}
int main() {
    int n;
    cin >> n;
    cout << aa(n);
    return 0;
}