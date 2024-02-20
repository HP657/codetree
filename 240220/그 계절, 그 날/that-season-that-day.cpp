#include <iostream>
using namespace std;

bool yun(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int season(int y, int m, int d) {
    if (m < 1 || m > 12 || d < 1 || d > 31)
        return -1;

    if (m == 2) {
        if (d > 29 || (d == 29 && !yun(y)))
            return -1;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d > 30)
            return -1;
    }

    if (m >= 3 && m <= 5)
        return 0;
    else if (m >= 6 && m <= 8)
        return 1;
    else if (m >= 9 && m <= 11)
        return 2;
    else
        return 3;
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    int aa = season(y, m, d);
    if (aa == -1)
        cout << "-1";
    else {
        string seasons[4] = {"Spring", "Summer", "Fall", "Winter"};
        cout << seasons[aa];
    }

    return 0;
}