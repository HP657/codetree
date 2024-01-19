#include <iostream>
using namespace std;
int main() {
    double a, b;
    int c;
    cin >> a >> b;
    c = b / ((a / 100) * (a / 100));
    cout << c;
    if (c >= 25)
    {
        cout << "Obesity";
    }
    return 0;
}