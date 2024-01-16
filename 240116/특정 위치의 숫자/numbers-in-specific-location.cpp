#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (i+1 == 3 | i+1 == 5 | i+1 == 10)
        {
            sum = sum + arr[i];
        }
    }
    cout << sum;
    return 0;
}