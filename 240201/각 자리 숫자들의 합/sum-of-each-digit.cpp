#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    string a;
    a = to_string(n);
    for (int i = 0; i < a.length(); i++)
    {
        sum += stoi(a[i]);
    }
    cout << sum;
    return 0;
}