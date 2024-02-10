#include <iostream>
using namespace std;

int t(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0) {
            cnt++;
        } else {
            int num = i;
            while (num != 0) {
                int digit = num % 10;
                if (digit == 3 || digit == 6 || digit == 9) {
                    cnt++;
                    break;
                }
                
                num /= 10;
            }
        }
    }
    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << t(a, b) << endl;
    return 0;
}