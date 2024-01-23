#include <iostream>
using namespace std;
int main() {
    int a;
    while (true)
    {
        cin >> a;
        if (a == 25)
        {
            break;
        }
        else if (a < 25)
        {
            cout << "Higher";
        }
        else if (a > 25)
        {
            cout << "Lower";
        }
        cout << endl;
    }
    cout << "Good";
    return 0;
}