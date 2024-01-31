#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    int sum = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (int(a[i]) >= 48 && int(a[i] <= 57))
        {
            sum += int(a[i]) - 48;
        }
    }
    cout << sum;
    return 0;
}