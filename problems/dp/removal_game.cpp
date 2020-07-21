#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<long long>> dp(n+1, vector<long long>(n+1, 0));
    for (int i=0; i<n; ++i) cin >> dp[1][i];
    for (int i=2; i<=n; ++i) {
        for (int j=0; j<=n-i; ++j) {
            dp[i][j]=dp[i-1][j]<dp[i-1][j+1] ? min(dp[i-2][j], dp[i-2][j+1])+dp[1][j+i-1] : min(dp[i-2][j+1], dp[i-2][j+2])+dp[1][j];
        }
    }
    cout << dp[n][0];
}

