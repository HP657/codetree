#include <iostream>
using namespace std;
int main() {
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int ev = 0, od = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            od += a[i];
        }
        else
        {
            ev += a[i];
        }
    }
    if (ev >= od)
    {
        cout << ev - od;
    }
    else
    {
        cout << od - ev;
    }
    return 0;
}