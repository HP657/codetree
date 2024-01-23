#include <iostream>
using namespace std;
int main() {
    int a;
    while (true)
    {
        cin >> a;
        if (a == 1)
        {
            cout << "John";
        }
        else if (a == 2)
        {
            cout << "Tom";
        }
        else if (a == 3)
        {
            cout << "Paul";
        }
        else if (a == 4)
        {
            cout << "Sam";
        }
        else
        {
            cout << "Vacancy";
            break;
        }
        cout << endl;
    }
    return 0;
}