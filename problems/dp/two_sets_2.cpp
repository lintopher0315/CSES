#include <bits/stdc++.h>

using namespace std;

const int MOD=1e9+7;

int main() {
    int n;
    cin >> n;
    if (n%4!=3 && n%4!=0) {
        cout << 0;
        return 0;
    }
    int s=n*(n+1)/2/2;
    vector<long long> dp(s+1, 0);
    dp[0]=1;
    for (int i=1; i<n; ++i) {
        for (int j=s; j>=i; --j) {
            dp[j]=(dp[j]+dp[j-i])%MOD;
        }
    }
    cout << dp[s];
}

