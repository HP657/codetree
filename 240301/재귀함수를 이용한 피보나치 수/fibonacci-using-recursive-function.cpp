#include <iostream>
#include <vector>
using namespace std;

int aa(int n, vector<int>& dp) {
    if (n < 2) {
        return n;
    }
    
    if (dp[n] == -1) {
        dp[n] = aa(n - 1, dp) + aa(n - 2, dp);
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << aa(n, dp);
    return 0;
}