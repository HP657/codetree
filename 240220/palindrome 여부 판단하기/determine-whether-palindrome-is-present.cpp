#include <iostream>
using namespace std;

bool aa(string str, int len) {
    string temp = "";
    for (int i = len - 1; i >= 0; i--) {
        temp += str[i];
    }
    if (str == temp) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    string str;
    cin >> str;
    int len = str.length();
    bool y = aa(str, len);
    if (y) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}