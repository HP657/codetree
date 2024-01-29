#include <iostream>
using namespace std;
int n, m;
int answer[100][100] = {};
int count = 1;

int main() {
    int n, m, cnt = 1;
    cin >> n >> m;
    int a[n][m] = {};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == 0)
            {
                int jj = j;
                int ii = i;

                while(jj >= 0 && ii < n)
                {
                    a[ii][jj] = cnt;

                    ii++;
                    jj--;
                    cnt++;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}