#include <iostream>
using namespace std;

bool aa(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return true;
    else
        return false;
}

int bb(int y, int m, int d) {
    if (m < 1 || m > 12)
        return -1;
    if (d < 1 || d > 31)
        return -1;

    if (m == 2 && d > 29)
        return -1;
    else if (m == 2 && d == 29 && !aa(y))
        return -1;

    if (m >= 3 && m <= 5)
        return 0;
    else if (m >= 6 && m <= 8)
        return 1;
    else if (m >= 9 && m <= 11)
        return 2;
    else
        return 3;
    return -1;
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    int ss = bb(y, m, d);
    if (ss == -1)
        cout << "-1";
    else {
        string sss[4] = {"Spring", "Summer", "Fall", "Winter"};
        cout << sss[ss];
    }
    return 0;
}