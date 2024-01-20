#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a >= 1 && a <= 12)
    {
        if (a >= 3 && a <= 5)
        {
            cout << "Spring";
        }
        else if (a >= 6 && a <= 8)
        {
            cout << "Spring";
        }
        else if (a >= 9 && a <= 11)
        {
            cout << "Fall";
        }
        else
        {
            cout << "Winter";
        }
    }
    return 0;
}