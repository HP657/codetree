#include <iostream>
using namespace std;

void aa(int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << 1;
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    aa(n, m);
    return 0;
}