#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a = "";
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        string b;
        cin >> b;
        if (int(b[0]) < min)
        {
            min = int(b[0]);
            a = b;
        }
    }

    cout << a << endl;

    return 0;
}