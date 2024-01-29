#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(max < a[i])
        {
            int cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(a[j] == a[i])
                {
                    cnt++;
                }
            }
            if(cnt == 1)
            {
                max = a[i];
            }
        }
    }

    cout << max;
    return 0;
}