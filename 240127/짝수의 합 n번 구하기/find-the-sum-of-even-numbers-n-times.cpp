#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int sum = 0;
        for (int j = a; j <= b; j++)
        {
            if (j % 2 == 0)
            {
                sum += j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}