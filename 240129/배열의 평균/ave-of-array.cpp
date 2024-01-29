#include <iostream>
using namespace std;
int main() {
    cout << fixed;
    cout.precision(1);
    int a[2][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];   
        }
    }
    for (int i = 0; i < 2; i++)
    {
        double sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += a[i][j];
        }
        cout << sum / 4.0 << ' ';
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        double sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += a[j][i];
        }
        cout << sum / 2.0 << ' ';
    }
    cout << endl;
    double sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum += a[j][i];
        }
    }
    cout << sum / 8.0;
    return 0;
}