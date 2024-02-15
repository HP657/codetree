#include <iostream>
using namespace std;

bool bbb(int *aa, int *bb, int n, int b) {
    for(int i = 0; i < b; i++)
        if(aa[i + n] != bb[i])
            return false;

    return true;
}

bool aaa(int *aa, int *bb, int a, int b) {
    for(int i = 0; i <= a - b; i++)
        if(bbb(aa, bb, i, b))
            return true;
    
    return false;
}

int main() {
    int a, b;
    cin >> a >> b;
    int aa[a];
    int bb[b];
    for (int i = 0; i < a; i++) {
        cin >> aa[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> bb[i];
    }

    if(aaa(aa, bb, a, b)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}