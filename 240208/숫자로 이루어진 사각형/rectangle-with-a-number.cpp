#include <iostream>
using namespace std;

void aa(int n) {
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++, num++)
        {
            if (num == 10)
            {
                num = 1;
            }
            cout << num << ' ';
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    aa(n);
    return 0;
}