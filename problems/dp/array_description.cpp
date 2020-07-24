#include <bits/stdc++.h>

using namespace std;

const int MOD=1e9+7;

int main() {
    int n, m;
    long long ans=0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i=0; i<n; ++i) cin >> v[i];
    vector<vector<long long>> dp(m+2, vector<long long>(n, 0));
    for (int i=1; i<=m; ++i) {
        if (!v[0] || v[0]==i) dp[i][0]=1;
    }
    for (int i=1; i<n; ++i) {
        for (int j=1; j<=m; ++j) {
            if (!v[i] || v[i]==j) dp[j][i]=(dp[j-1][i-1]+dp[j][i-1]+dp[j+1][i-1])%MOD;
        }
    }
    for (int i=1; i<=m; ++i) ans=(ans+dp[i][n-1])%MOD;
    cout << ans;
}

