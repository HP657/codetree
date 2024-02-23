#include <iostream>
using namespace std;

bool aa(string a) {
    char temp;
    temp = a[0];
    for (int i = 1; i < a.length(); i++) {
        if (temp != a[i]) {
            return true;
        }
    }
    return false;
}
int main() {
    string a;
    cin >> a;
    bool b = aa(a);
    if (b) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}