#include <iostream>
using namespace std;
int main() {
    int a, b[100], i = 0, sum = 0;
    while (true)
    {
        cin >> a;
        if (a != 0)
        {
            b[i] = a;
            i++;
        }
        else
        {
            break;
        }
    }
    for (int j = i - 3; j < i; j++)
    {
        sum += b[j];
    }
    cout << sum;
    return 0;
}