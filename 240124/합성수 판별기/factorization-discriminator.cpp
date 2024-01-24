#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool a = false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = true;
        }
    }
    if (a)
    {
        cout << "C";
    }
    else
    {
        cout << "N";
    }
    return 0;
}