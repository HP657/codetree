#include <iostream>
using namespace std;
int main() {
    int n;
    int a, b, prod = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            prod *= j;
        }
        cout << prod << endl;
        prod = 1;
    }
    return 0;
}